#include<iostream>
using namespace std;
bool linear_search(int arr[],int s, int k,int i){
    //base case 
    if(i>=s)
        return 0;
    if(arr[i]==k)
        return 1;
    linear_search(arr,s,k,i+1);
}
int main(){
    int arr[] = {1,2,3,4,32,44};
    int s = sizeof(arr)/sizeof(arr[0]);
    int key = 42;
    int index = 0;
    cout<<linear_search(arr,s,key,index);
}