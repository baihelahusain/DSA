#include<iostream>
using namespace std;
int main(){
    int a = 32;
    float b = 23.3;
    float c=a+b;
    cout<<c<<endl;
    cout<<b/a<<endl;
    cout<<a/b<<endl;
    /*if we did not initially define the data type then the data type depends on the data type of dividend whatever the dividend the result will be the same data type*/
    cout<<2/5<<endl;
    cout<<2./5<<endl;
    cout<<5/2.3<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
};
