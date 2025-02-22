#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,35,53,63,2};
    int store[5];
    for(int i=4;i>-1;i--){
        store[i] = arr[4-i];
     
    }
    for(int i = 0;i<5;i++)
        cout<<store[i]<<" ";
}