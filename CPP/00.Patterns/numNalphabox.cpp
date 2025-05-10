#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1;       // For printing numbers
    char ch = 'A';     // For printing characters
    int i = 0;

    while (i <= n) {
        int j = 0;
        while (j <= n) {
            if (i % 2 != 0) {  // Odd row: print numbers
                cout << num;
                num++;
            } else {           // Even row: print characters
                cout << ch;
                ch++;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
