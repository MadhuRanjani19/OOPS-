#include <iostream>
using namespace std;

int main() {
    int unitsConsumed;
    double billAmount = 0;

    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;

    if (unitsConsumed <= 200) {
        billAmount = 0;
    } else if (unitsConsumed <= 400) {
        billAmount = (unitsConsumed - 200) * 5;
    } else if (unitsConsumed <= 600) {
        billAmount = 200 * 5 + (unitsConsumed - 400) * 7;
    } else if (unitsConsumed <= 800) {
        billAmount = 200 * 5 + 200 * 7 + (unitsConsumed - 600) * 9;
    } else {
        billAmount = 200 * 5 + 200 * 7 + 200 * 9 + (unitsConsumed - 800) * 11;
    }

    cout << "The amount of the bill is: Rs. " << billAmount << endl;

    return 0;
}

