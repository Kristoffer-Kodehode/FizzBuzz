#include <iostream>

int main() {
    for (int i = 1; i < 100; i++) {
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
    return 0;
}