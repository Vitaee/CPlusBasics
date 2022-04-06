#include <cstdio>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>


using namespace std;

// holds an HTTP Message
template<bool isReq, class Body, class Fields>
struct message;

// Holds an HTTP Request
template<class Body, class Fields>
struct message<true, Body, Fields> : Fields,
private Body::value_type 
{
    int version;

    string_view method() const {
        return this->get_method();
    }

    void method(string_view s){
        this->set_method(s);
    }

    string_view target() const{
        return this->get_target();
    }

    void target(string_view s){
        this->set_target(s);
    }

    typename Body::value_type const& body() const {
        return *this;
    }

    typename Body::value_type& body() {
        return *this;
    }

};


// Holds an HTTP response
template<class Body, class Fields>
struct message<false, Body, Fields> : Fields,
private Body::value_type
{
    int version, status;
    string_view reason() const {
        return this->get_reason();
    }

    void reason(string_view s){
        this->set_reason(s);
    }

    typename Body::value_type const&
    body() const
    {
        return *this;
    }

    typename Body::value_type&
    body()
    {
        return *this;
    }

};


// Body

template<class B, class = void>
struct is_body : false_type {};

template<class B>
struct is_body<B, __void_t<
    typename B::value_type,
    decltype(B::write(declval<ostream&>(), 
    declval<typename B::value_type const&>()), (void)0) >> : true_type {};

