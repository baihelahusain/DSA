#include <iostream>
#include <bitset> // For alternative method (optional)
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0"; // Handle the case where n is 0
        return;
    }

    int binary[32]; // Array to store binary digits (max 32 bits for integers)
    int i = 0; // Index for the binary array

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2; // Store the remainder
        n = n / 2; // Divide the number by 2
        i++; // Increment the index
    }

    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary representation: ";
    decimalToBinary(decimal);

    cout << endl;
    return 0;
}