#include <iostream>

int main() {
    int x;

    std::cout << "Enter a number: ";
    std::cin >> x;

    for (int i = 1; i < (x+1); i++) {
        if (!(i % 3) && !(i % 5)) {
            std::cout << "FizzBuzz\n";
        } else if (!(i % 5)) {
            std::cout << "Buzz\n";
        } else if (!(i % 3)) {
            std::cout << "Fizz\n";
        } else {
            std::cout << i << "\n";
        }
    }

    char exit;
    std::cout << "Input any character to exit: ";
    std::cin >> exit;

    return 0;
}