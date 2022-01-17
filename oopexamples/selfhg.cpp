#include <functional>
#include <iostream>
#include <vector>

template<typename CONTAINERTYPE, typename UNARYFUNCTIONTYPE>
void myForEach(const CONTAINERTYPE& container, UNARYFUNCTIONTYPE unaryfunction){
    for (const auto& element: container){
        unaryfunction(element);
    }
}

template<typename CONTAINERTYPE, typename UNARYOPERATIONTYPE>
void myTransform(CONTAINERTYPE& container, UNARYOPERATIONTYPE unaryOperator)
{
    for(auto& element: container) {
        element = unaryOperator(element);
    }
}

template<typename NUMBERTYPE>
class ToSquare {
public:
  NUMBERTYPE operator()(const NUMBERTYPE& number) const noexcept {
    return number * number;
  }
};


template<typename TYPE>
void printOnStdOut(const TYPE& thing) {
  std::cout << thing << ", ";
}


int main() {
  std::vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  myTransform(numbers, ToSquare<int>());
  std::function<void(int)> printNumberOnStdOut = printOnStdOut<int>;
  myForEach(numbers, printNumberOnStdOut);
  return 0;
}