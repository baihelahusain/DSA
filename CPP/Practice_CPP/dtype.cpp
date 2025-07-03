#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';
    double d = 5.55;

    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Type of b: " << typeid(b).name() << endl;
    cout << "Type of c: " << typeid(c).name() << endl;
    cout << "Type of d: " << typeid(d).name() << endl;

    return 0;
}