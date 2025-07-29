#include<iostream>
using namespace std;
int mounted_peak(int arr[],int f,int l){
    int mid = f + (l - f)/2;
    if(f==l)
        return arr[mid];
    if(arr[mid]<arr[mid+1]){
        mounted_peak(arr,mid+1,l);
    }
    else{
        mounted_peak(arr,f,mid);
    }
}
int main(){
    int arr[] = {6,7,8,2,3};
    int s = sizeof(arr)/sizeof(arr[0]);
    int st = 0, e= s -1;
    cout<<mounted_peak(arr,st,e);
}