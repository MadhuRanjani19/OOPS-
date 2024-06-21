#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double num1, num2, num3, num4;
  cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    
    double multiplication = num1 * num2 * num3 * num4;
    cout << "The multiplication of the four numbers is: " << multiplication << endl;

    
    double geometricMean = pow(multiplication, 1.0 / 4.0);
    cout << "The geometric mean of the four numbers is: " << geometricMean << endl;

    return 0;
}

