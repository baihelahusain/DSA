#include<iostream>
using namespace std;
int binary_search(int arr[],int s,int st,int e,int k){
    int mid = st + (e-s)/2;
    if(st>e) return false;
    //base case
    if(arr[mid]==k) return true;
    if(arr[mid]>k){
        binary_search(arr,s,st,mid -1,k);
    }
    else{
        binary_search(arr,s,mid+1,e,k);
    }
}
int main(){
    int arr[] = {1,3,5,7,8,19};
    int s = sizeof(arr)/sizeof(arr[0]);
    int st = 0;
    int e = s-1;
    int k = 9;
    cout<<binary_search(arr,s,st,e,k);
}