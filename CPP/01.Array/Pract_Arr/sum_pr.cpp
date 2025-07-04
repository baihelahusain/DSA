#include<iostream>
using namespace std;

void sum_pr(int arr[],int size,int &s,int &pr){
    for(int i=0;i<size;i++){
        s+=arr[i];
        pr*=arr[i];
    }
}
int main(){
    int arr[]={2,3,4,5,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int pr = 1;
    sum_pr(arr,size,sum,pr);
    cout<<sum<<endl<<pr;
}