#include <iostream>
using namespace std;
// Function to check if a number is already in the array
bool isAlreadyEntered(int arr[], int size, int number) {
    
    // Loop through existing numbers
    for (int i = 0; i < size; i++)
        if (arr[i] == number)  // If number matches
            return true;       // It is already entered

    return false; // Not found
}
int main() {
    int n, num, arr[100], uniqueCount = 0;

    // Ask user for number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Ask user to enter numbers  
    cout << "Enter " << n << " numbers, one per line:\n";

    // Loop to read all numbers
    for (int i = 0; i < n; i++) {
        cin >> num;

        // Check if number already exists
        if (isAlreadyEntered(arr, uniqueCount, num))
            cout << "Already Entered: " << num << endl;
        else
            arr[uniqueCount++] = num; // Store unique number
    }

    // Print all unique numbers
    cout << endl << "Unique numbers entered: ";

    for (int i = 0; i < uniqueCount; i++)
        cout << arr[i] << " ";

    return 0;
}


