#include<iostream>
#include<string>
using namespace std;
void sayDigit(int n,string arr[]){
    if(n==0)
        return;
    int i = n%10;
    n = n / 10;

    sayDigit(n,arr);
    cout<<arr[i]<<" ";
}
int main(){
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    sayDigit(n, arr);
}
