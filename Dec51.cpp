#include <iostream>
using namespace std;
void find_location(char word[]) {
    for(int n=0; word[n]!='\0'; n++){
        cout<<word[n]<<" "<<"is at position"<<n<<endl;
    }
}
int main(){
    char word[6];
    cout<<"Enter a word:";
    cin>>word;
    find_location(word);
    return 0;
}
