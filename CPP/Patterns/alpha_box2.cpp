#include<iostream>
using namespace std;
int main(){
    char a = 65;
    int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}