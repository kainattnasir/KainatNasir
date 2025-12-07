#include <iostream>
using namespace std;
void g(char str[]) {
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]=='z') {
            str[i]='a';
        } else {
            str[i]=str[i]+1;
        }
    }
}
int main() {
    char str[]="aslam";
    g(str);
    cout<<str<<endl;
    return 0;
}


