/*Output:
5
A
BC
DEF
GHIJ
KLMNO*/
#include<iostream>
using namespace std;
int main(){
    int n;
    char a = 65;//Using ASCII
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            //char ch = 'A'+i-1
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
