#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char a = 65;
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<" ";
            space--;
        }
        int j  = 1;
        char b = 'A'+i+j-2;
        while(j<=i){
            cout<<b;
            b++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
         A
        BC
       DEF
      GHIJ
     KLMNO
    PQRSTU
   VWXYZ[\
  ]^_`abcd
 efghijklm
nopqrstuvw*/