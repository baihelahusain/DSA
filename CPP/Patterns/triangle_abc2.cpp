#include<iostream>
using namespace std;
int main(){
    int n;
    // char a = 65;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char a = 'A'+j-1; 
/*
for the below patter just replace i from a formula
A
BB
CCC
DDDD
EEEEE*/
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
AB
ABC
ABCD*/