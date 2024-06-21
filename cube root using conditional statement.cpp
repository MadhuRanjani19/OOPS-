#include <iostream>
#include <cmath>

using namespace std;

double cubeRoot(double num) {
    if (num >= 0)
        return pow(num, 1.0 / 3.0);
    else
        return -pow(-num, 1.0 / 3.0);
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double result = cubeRoot(number);
    cout << "Cube root of " << number << " is: " << result << endl;

    return 0;
}

