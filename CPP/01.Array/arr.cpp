#include <iostream>
using namespace std;

int main() {
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);
    float key = 3.3;
    int i = 0;

    while (i < size) {
        if (arr[i] == key) {
            cout << "Key found at index " << i << endl;
            break;
        }
        i++;
    }

    if (i == size) {
        cout << "Key not found" << endl;
    }

    return 0;
}
