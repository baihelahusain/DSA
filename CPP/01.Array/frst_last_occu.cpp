#include<iostream>
using namespace std;
int firstOccurrence(int arr[],int len,int key){
    int start = 0;
    int end = len - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int lastOccurrence(int arr[],int len,int key){
    int s = 0;
    int e = len - 1;
    int mid = s + (e-s)/2;
    int an = -1;
    while(s<=e){
        if(arr[mid]==key){
            an = mid;
            s = mid + 1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return an;
}
int main(){
    int odd[5]={2,2,2,3,3};
    int size = sizeof(odd)/sizeof(odd[0]);
    cout<<"1st occurrence at index:"<<firstOccurrence(odd,size,3)<<endl;
    cout<<"last occurence at index:"<<lastOccurrence(odd,size,3);

}