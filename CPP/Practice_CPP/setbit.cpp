#include<iostream>
using namespace std;

int setbit(int a, int b) {
    int cnt = 0;

    while (a > 0) {
        if (a & 1) { 
            cnt++;
        }
        a = a >> 1; 
    }

   
    while (b > 0) {
        if (b & 1) { 
            cnt++;
        }
        b = b >> 1; 
    }

    return cnt;
}

int main() {
    int d, e;
    cout << "Enter two numbers: ";
    cin >> d >> e;

    
    cout << "Total set bits: " << setbit(d, e) << endl;

    return 0;
}
