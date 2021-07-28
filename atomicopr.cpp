#include <iostream>


void do_count(int& c)
{
    std::atomic_ref<int> counter{ c };
    std::vector<std::thread> threads;
    
    for (int i = 0; i < 10; ++i)
    {
        threads.emplace_back([&counter]() {
            for (int i = 0; i < 10; ++i)
                ++counter;
            });
    }

    for (auto& t : threads) t.join();

}


int main()
{
    int c = 0;

    do_count(c);
    std::cout << c << '\n'; // prints 100
}