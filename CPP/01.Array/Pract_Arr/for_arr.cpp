#include <iostream>
using namespace std;

int main() {
    double arr[] = {1.11, 2.22, 3.33, 4.44, 5.55};
    int size = sizeof(arr) / sizeof(arr[0]);
    double key = 4.44;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Key found at index " << i << endl;
            break;
        }
    }

    return 0;
}
