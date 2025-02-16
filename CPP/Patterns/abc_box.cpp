/*
sh-5.2$ ./abc_box
5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main(){
    //char a = 65; we can print this using ascii this is easy one
    int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        //a++;
    }
    
    return 0;
}
