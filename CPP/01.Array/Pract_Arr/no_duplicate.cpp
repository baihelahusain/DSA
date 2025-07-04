#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,3,2,4,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int cnt =0;
        for(int j =0;j<size;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<arr[i]<<" ";
        }
        
    }
}