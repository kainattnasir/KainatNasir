#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstarray[], int firstarrays,int secondarray[], int secondarraysize) {
    cout << "Resulting array: [";
    // first element of first array
    cout << firstarray[0];
    // elements of second array
    for (int i = 0; i < secondarraysize; i++) {
        cout << ", " << secondarray[i];
    }
    // last element of first array
    cout << ", " << firstarray[1] << "]" << endl;
}
int main() {
    int firstarraysize, secondarraysize;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> firstarraysize;
    int firstarray[2];
    cout << "Enter " << firstarraysize << " elements for the first array, one per line:";
    for (int i = 0; i < firstarraysize; i++)
    cin >> firstarray[i];
    cout << "Enter the number of elements for the second array: ";
    cin >> secondarraysize;
    int secondarray[100];
    cout << "Enter " << secondarraysize << " elements for the second array, one per line:";
    for (int i = 0; i < secondarraysize; i++)
    cin >> secondarray[i];
    insertArrayInMiddle(firstarray, firstarraysize, secondarray, secondarraysize);
    return 0;
}




