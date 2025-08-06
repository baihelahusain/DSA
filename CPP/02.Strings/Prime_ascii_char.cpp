#include <iostream>
#include<string>
using namespace std;

// Function to find nearest prime ASCII value
char nearestPrimeChar(char c) {
    auto isPrime = [](int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    };

    int ascii = (int)c;
    int lower = ascii, upper = ascii;

    while (lower >= 32 || upper <= 122) { // ASCII printable range
        if (upper <= 122 && isPrime(upper)) return (char)upper;
        if (lower >= 32 && isPrime(lower)) return (char)lower;
        upper++;
        lower--;
    }
    return c;
}

// Function to convert entire string (can't modify s, so create a new string)
string convertToPrimeASCII(const string s) {
    string result = s; // copy of s for modification
    for (int i = 0; i < s.size(); i++) {
        result[i] = nearestPrimeChar(s[i]);
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << convertToPrimeASCII(s) << endl;
    }
    return 0;
}
