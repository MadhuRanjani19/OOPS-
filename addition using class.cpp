#include <iostream>
using namespace std;

class Adder {
private:
    int num1;
    int num2;

public:
    
    Adder(int n1, int n2) : num1(n1), num2(n2) {}

    
    int add() const {
        return num1 + num2;
    }
};

int main() {
    int number1, number2;

    
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    
    Adder adder(number1, number2);
    std::cout << "The sum of " << number1 << " and " << number2 << " is " << adder.add() << "." << std::endl;

    return 0;

    return 0;
}

