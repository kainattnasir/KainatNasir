#include <iostream>
#include <string>
using namespace std;
// Function that adds "7" to chords that don't already end with 7
void jazzifyChords(string chords[], int numChords) {

    // Loop through each chord in the array
    for (int i = 0; i < numChords; i++) {

        // Find the last character of the chord
        int last = chords[i].length() - 1;

        // If the last character is NOT '7'
        if (chords[i][last] != '7') {

            // Add "7" at the end of the chord
            chords[i] += "7";
        }
    }
}

int main() {

    string chords[3]; // Array for 3 chords only

    // Taking input: G F C
    cin >> chords[0] >> chords[1] >> chords[2];

    // Call the function to jazzify the chords
    jazzifyChords(chords, 3);

    // Output the updated chords
    cout << chords[0] << " " << chords[1] << " " << chords[2];

    return 0;
}


