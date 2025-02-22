#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    if (key == arr[0]) {
        cout << "Key found at index 0" << endl;
    } else if (key == arr[1]) {
        cout << "Key found at index 1" << endl;
    } else if (key == arr[2]) {
        cout << "Key found at index 2" << endl;
    } else if (key == arr[3]) {
        cout << "Key found at index 3" << endl;
    } else if (key == arr[4]) {
        cout << "Key found at index 4" << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
