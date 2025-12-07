#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    // Take input string
    
    getline(cin, a);  // Use getline to read full line including spaces

    // Print "something" + space + input string
    cout << "something " << a << endl;

    return 0;
}

