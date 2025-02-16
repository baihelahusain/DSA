/*
4
4321
4321
4321
4321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*
//n-j+i-1;
5
43210
54321
65432
76543
87654
*/