#include <iostream>
using namespace std;
// Function to check if an array is special
bool isSpecialArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(i % 2 == 0) { // Even index
            if(arr[i] % 2 != 0) // Number should be even
                return false;
        } else { // Odd index
            if(arr[i] % 2 == 0) // Number should be odd
                return false;
        }
    }
    return true;
}

int main() {
    int size;

    // Step 1: Ask the user how many numbers are in the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Step 2: Ask the user to enter the array elements
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Step 3: Check if the array is special
    if(isSpecialArray(arr, size))
        cout << "This array is special!" << endl;
    else
        cout << "This array is NOT special!" << endl;

    return 0;
}

