/*#include<iostream>
using namespace std;
int main(){
    int a, b = 1;
    a=10;
    if(++a)
        cout<<b;
    
    else
        cout<<++b;
    
}
*/
#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;
    if(a-->0|| b++>2){
        cout<<'stage inside';
    } else {
        cout<<'stage';
    }
    cout<<a<<endl<<b;

}