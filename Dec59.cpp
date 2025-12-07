#include <iostream>
using namespace std;
// Function to check if you can pay with given change
bool canPayWithChange(int coins[], double totalDue) {
    // Convert coins to total money
    double totalMoney = coins[0]*0.25 + coins[1]*0.10 + coins[2]*0.05 + coins[3]*0.01;
    return totalMoney >= totalDue;
}

int main() {
    double totalDue;
    int coins[4]; // quarters, dimes, nickels, pennies

    // Input total due
    cin >> totalDue;

    // Input coins
    for(int i = 0; i < 4; i++) {
        cin>>coins[i];
    }

    // Call the function
    if(canPayWithChange(coins, totalDue))
        cout<<"false";
    else
        cout<<"true";

    return 0;
}



