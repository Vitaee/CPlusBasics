#include <iostream>
#include <tuple>
#include <regex>


std::tuple<bool, std::string, std::string, std::string>
is_valid_email_format_with_result(std::string const & email)
{
    auto rx = std::regex{
        R"(^([A-Z0-9._%+-]+)@([A-Z0-9.-]+)\.([A-Z]{2,})$)", 
        std::regex_constants::icase 
    };

    auto result = std::smatch{};
    auto success = std::regex_match(email, result, rx);


    std::cout << result[1].str();

    return std::make_tuple(
        success,
        success ? result[1].str() : "",
        success ? result[2].str() : "",
        success ? result[3].str() : ""
    );
}


auto ltest3 = [](std::string const & email)
{

    std::tuple<bool, std::string,std::string,std::string> result_tuple = is_valid_email_format_with_result(email);


    std::cout << "---------------------" << "\n";

    std::cout << email << " : \n" 
    << "\n local = " << std::get<1>(result_tuple)
    << "\n domain = " <<  std::get<2>(result_tuple)

    << "\n dns = " <<  std::get<3>(result_tuple)

    << "\n";

    std::cout << "---------------------";
    



};


int main() {
    
    ltest3("JOHN.DOE@DOMAIN.COM");
    ltest3("JOHNDOE@DOMAIL.CO.UK");
    ltest3("JOHNDOE@DOMAIL.INFO");
    ltest3("J.O.H.N_D.O.E@DOMAIN.INFO");
    ltest3("ROOT@LOCALHOST");
    ltest3("john.doe@domain.com");


    return 0;
}