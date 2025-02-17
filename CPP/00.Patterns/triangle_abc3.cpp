#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char a = 'A'+i+j-2; 
            cout<<a;
            j++;
        }
        cout<<endl;
        // a++;
        i++;
    }
    
    return 0;
}
/*Output:
4
A
BC
CDE
DEFG*/