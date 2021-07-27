#include <algorithm>
#include <iostream>
#include <vector>

class IsPalindrome 
{
    public:
        bool operator() (const std::string& word) const {

            const auto middleOfWord = begin(word) + word.size() / 2;
            return std::equal(begin(word), middleOfWord , rbegin(word));
        }
};

int main()
{
    std::vector<std::string> someWords { "dad", "hello", "radar", "vector", "deleveled", "foo", "bar", "C++", "aibohphobia"};

    someWords.erase(std::remove_if(begin(someWords), end(someWords), IsPalindrome()), end(someWords));

    std::for_each(begin(someWords), end(someWords), [](const auto& word) {
        std::cout << word << std::endl;
    });

}