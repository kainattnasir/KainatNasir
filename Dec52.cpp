#include <iostream>
#include <cstring>
using namespace std;
void display_reverse(char str[]) {
    for (int i=strlen(str)-1;i>=0;i--)
        cout<<str[i];
}

int main() {
    char str[5];
    cout<<"Enter string:";
    cin>>str;
    display_reverse(str);
    return 0;
}



