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
            char ch = a+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        // a++;
        i++;
    }
    
    return 0;
}