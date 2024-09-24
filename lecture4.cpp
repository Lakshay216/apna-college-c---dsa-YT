#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows for the upper part of the pattern

    // Loop for the upper part of the pattern
    for (int i = 0; i < n; i++) {
        // Printing the left half of the stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        // Printing spaces between the two halves of stars
        for (int j = 0; j < 2 * (2 - i) + 2; j++) {
            cout << " ";
        }
        // Printing the right half of the stars
        for (int j = i + 1; j > 0; j--) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    // Loop for the lower part of the pattern (in reverse)
    for (int i = n; i > 0; i--) {
        // Printing the left half of the stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        // Printing spaces between the two halves of stars
        for (int j = 0; j < 2 * (2 - i) + 4; j++) {
            cout << " ";
        }
        // Printing the right half of the stars
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0; // Program ends
}