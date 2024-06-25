#include <iostream>
int main() {
    int a, b;

    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;
    if (a <= 0 || b <= 0) {
        std::cout << "Please enter positive integers only." << std::endl;
        return 1;
    }
    int temp;
    do {
        temp = a % b;
        a = b;
        b = temp;
    } while (b != 0);

    std::cout << "The GCD is " << a << std::endl;

    return 0;
}

