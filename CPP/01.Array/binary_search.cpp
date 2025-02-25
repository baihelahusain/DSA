#include<iostream>
using namespace std;
int BinarySearch(int arr[],int len,int key){
    int start = 0;
    int end = len - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return true;
        }
        else if(arr[mid]<key){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}
int main(){
    int odd[5]={2,3,5,7,44};
    int size = sizeof(odd)/sizeof(odd[0]);
    int even[6]={1,2,3,4,7,9};
    int n = sizeof(even)/sizeof(even[0]);
    int odd_search = BinarySearch(odd,size,7);
    int even_search = BinarySearch(even,n,32);
    cout<<odd_search<<endl<<even_search<<endl;
}