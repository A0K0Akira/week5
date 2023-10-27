#include <iostream>


int main() {
    int firstNumber, secondNumber;

    std::cout << "Enter two number: ";
    std::cin >> firstNumber >> secondNumber;

    int sum = 0;

    for (int i = firstNumber; i <= secondNumber; i++) {
        sum += i;
    }

    std::cout << "Sum from " << firstNumber << " to " << secondNumber << " is " << sum << std::endl;

    return 0;
}