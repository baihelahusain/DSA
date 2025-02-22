#include<iostream>
using namespace std;
bool search(int arr[10],int a){
    for(int i = 0;i<10;i++){
        if(arr[i]==a){
            return 1;
        }
    }
    return 0;   
}
int main(){
    int arr[10] = {1,2,3,5,6,7,7,8,9,4};
    int ele = 23;
    bool found = search(arr,ele);
    if(found){
        cout<<"element is in array"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}