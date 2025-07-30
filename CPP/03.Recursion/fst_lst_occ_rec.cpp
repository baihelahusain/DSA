#include<iostream>
using namespace std;
int lstocc(int arr[],int st,int e,int k){
    int mid = st + (e - st)/2;
    if(st>e)
        return -1;
    if(arr[mid]==k){
        if (mid == e || arr[mid + 1] != k)
            return mid;
        return lstocc(arr, mid + 1, e, k);
    }
    else if(arr[mid]<k){
        return lstocc(arr,mid+1,e,k);
    }
    else{
        return lstocc(arr,st,mid-1,k);
    }
}
int fstocc(int arr[],int st,int e,int k){
    int mid = st + (e - st)/2;
    if(st>e)
        return -1;
    if(arr[mid]==k){
        if (mid == st || arr[mid-1] != k)
            return mid;
        return fstocc(arr, st, mid-1, k);
    }
    else if(arr[mid]>k){
        return fstocc(arr,st,mid - 1,k);
    }
    else{
        return fstocc(arr,mid+1,e,k);
    }
}
int main(){
    int arr[] = {1,2,2,2,2,3,3,4};
    int key = 2;
    int s = sizeof(arr)/sizeof(arr[0]);
    int st = 0, e= s -1;
    cout<<fstocc(arr,st,e,key)<<" "<< lstocc(arr,st,e,key);
}