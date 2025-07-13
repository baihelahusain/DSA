#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j =i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    vector<int>vec={5,2,3,1,6,7,84,24,343};
    insertion(vec);
    for(int nums:vec){
        cout<<nums<<" ";
    }
}