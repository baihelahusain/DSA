/*
1st: if we use comment the below pattern will be get printed
1
23
456
78910
2nd:for the below code the same pattern we will be get as o/p*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        // int val = i;
        int j = 1;
        while(j<=i){
            cout<<i+j-1; //cout<<val;
            // val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}