#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        
    }

    int sum = 0;
    int i = 1; 
    
    do {
        sum += i;
        i++;
    } while (i <= n);

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}

