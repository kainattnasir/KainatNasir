#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size){
    double total=0;
    for(int i=0;i<size;i++)
        total+=resistance[i];
    return total;
}
int main(){
    int n;
    cout<<"Enter the number of resistances: ";
    cin>>n;
    double resistance[n];
    cout<<"Enter "<<n<<" resistance values in ohms:\n";
    for(int i=0;i<n;i++)
    cin>>resistance[i];
    double total=calculateTotalResistance(resistance,n);
    cout<<"Total resistance of the series circuit is: "<<total<<" ohms"<<endl;
    return 0;
}

