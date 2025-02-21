#include <iostream>
using namespace std;

// Function to convert decimal to binary using a & 1
void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0"; // Handle the case where n is 0
        return;
    }

    int binary[32]; // Array to store binary digits (max 32 bits for integers)
    int i = 0; // Index for the binary array

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n & 1; // Store the LSB (0 or 1)
        n = n >> 1; // Right shift the number by 1
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