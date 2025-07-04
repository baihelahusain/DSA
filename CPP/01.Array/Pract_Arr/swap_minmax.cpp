#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {5,15,-2,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m = INT_MAX;
    int l =INT_MIN;
    int index_min = 0;
    int index_max = 0;
    for(int i=0;i<size;i++){
        if(arr[i]<m){
            m = arr[i];
            index_min = i;
        }
        if(arr[i]>l){
            l = arr[i];
            index_max = i;
        }
    }
    swap(arr[index_max],arr[index_min]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<m<<endl;
    cout<<l<<endl;
}