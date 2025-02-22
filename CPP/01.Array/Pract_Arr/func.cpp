#include <iostream>
using namespace std;

void searchArray(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Key found at index " << i << endl;
            return;
        }
    }
    cout << "Key not found" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    searchArray(arr, size, key);

    return 0;
}
