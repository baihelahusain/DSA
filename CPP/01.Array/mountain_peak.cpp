#include<iostream>
using namespace std;
int MountainPeak(int ar[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(ar[mid]<ar[mid + 1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[8]={1,2,6,2,2,2,2,1};
    cout<<"The Mountain Peak is at:"<<MountainPeak(arr,8);
}