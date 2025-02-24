#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
void swapAlternate(int arr[],int n){
    for(int i =0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[9]={1,4,2,6,3,9,5,8,0};
    int size = 9;
    swapAlternate(arr,size);
    printArr(arr,size);
}