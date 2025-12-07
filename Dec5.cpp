#include <iostream>
using namespace std;
void find_location(int w, char words[]) {
    for(int n=0; n<=2; n++){
        cout<<words[3]<<"is at position"<<n<<endl;
    }
}
int main(){
    int w;
    char words[4];
    cout<<"Enter a word:";
    cin>>w;        
    words[3]=w;   
    find_location(w, words);
    return 0;
}

