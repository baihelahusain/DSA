/*
*****
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cin >> n;

    while (i <= n) {
        // Print spaces
        int space = i - 1;
        while (space) {
            cout << " ";
            space--; 
        }

        // Print stars
        int a = n - i + 1;
        int j = 1;
        while (j <= a) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
