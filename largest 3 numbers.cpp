#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}

