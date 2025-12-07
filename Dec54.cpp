#include <iostream>
using namespace std;
void printReverse(int arr[], int n) {
    cout<<"Reverse order:";
    for (int i=n-1; i>=0;i--) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<" "<<n<<" numbers, one per line:\n";
    for (int i=0; i<n;i++) {
    cin>>arr[i];
    }
    printReverse(arr, n);
    return 0;
}
