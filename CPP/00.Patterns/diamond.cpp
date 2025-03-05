#include <iostream>
using namespace std;

int main() {
    int height = 5; // Height of the star

    // Upper part of the star
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = height; j > i; j--) {
            cout << " ";
        }
        // Print stars
        cout << "*";
        // Print spaces between stars
        for (int j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
        }
        if (i == 1) {
            cout << "\n";
        } else {
            cout << "*\n";
        }
    }

    // Lower part of the star
    for (int i = height - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = height; j > i; j--) {
            cout << " ";
        }
        // Print stars
        cout << "*";
        // Print spaces between stars
        for (int j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
        }
        if (i == 1) {
            cout << "\n";
        } else {
            cout << "*\n";
        }
    }

    return 0;
}
