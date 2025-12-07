#include <iostream>
using namespace std;
int main() {
    // Ask the user to type a sentence
    string text;
    getline(cin, text); // We use getline so we can read spaces too

    // Look at each character in the sentence one by one
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i]; // This is the current character we are checking

        //  If this character is NOT a vowel, print it
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            cout << ch; // Print only non-vowel characters
        }

    }
    //  Move to a new line after finishing
    cout << endl;
    return 0; // End of the program
}

