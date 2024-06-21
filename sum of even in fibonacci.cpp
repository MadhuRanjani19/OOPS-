#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, sum = 0, n, d;
    cout << "Enter the range: ";
    cin >> n;
    
    while (a <= n) {
        if (a % 2 == 0) {
            sum += a;
        }
        d = a + b;
        a = b;
        b = d;
    }
    
    cout << "The sum of even terms in Fibonacci sequence up to " << n << " is: " << sum << endl;
    return 0;
}

