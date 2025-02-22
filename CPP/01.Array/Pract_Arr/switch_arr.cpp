#include <iostream>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    char key = 'c';

    switch (key) {
        case 'a':
            cout << "Key found at index 0" << endl;
            break;
        case 'b':
            cout << "Key found at index 1" << endl;
            break;
        case 'c':
            cout << "Key found at index 2" << endl;
            break;
        case 'd':
            cout << "Key found at index 3" << endl;
            break;
        case 'e':
            cout << "Key found at index 4" << endl;
            break;
        default:
            cout << "Key not found" << endl;
    }

    return 0;
}
