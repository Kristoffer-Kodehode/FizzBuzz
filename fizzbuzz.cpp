#include <iostream>

int set_iterations();

int main() {
    int x = set_iterations();
    /*
    std::cout << "Enter a number: ";
    std::cin >> x;*/

    ;

    if (x > 10000) {
        std::cout << "Your CPU and time would rather you entered a number lower than 10 000...";
        return 1;
    }

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
    std::cout << "\n---END---\n";

    char exit;
    std::cout << "Input any character to exit: ";
    std::cin >> exit;//probably leaves garbage in memory, should fix when i learn more

    return 0;
}

int set_iterations() {
    int x;

    std::cout << "Enter a number: ";
    std::cin >> x;

    return x;
}