#include <iostream>
using namespace std;


int findSmallestMissingElement(int arr[], int size) {
    int expected = 0; 
    int index = 0; 

    
    while (index < size) {
        if (arr[index] != expected) {
            return expected; 
        }
        expected++;
        index++;
    }

    
    return expected;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findSmallestMissingElement(arr, size);
    cout << "The smallest missing element is: " << missingElement << endl;

    return 0;
}

