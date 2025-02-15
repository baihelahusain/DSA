#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char a = 'A'+i+j-2;
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}