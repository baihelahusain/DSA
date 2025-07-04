#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {5,15,-2,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m = INT_MAX;
    int l =INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<m){
            m = i;
        }
        if(arr[i]>l){
            l = i;
        }
    }
    cout<<m<<endl;
    cout<<l<<endl;
}