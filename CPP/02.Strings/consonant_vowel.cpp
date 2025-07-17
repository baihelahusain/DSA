#include<iostream>
#include<string>
using namespace std;
void CV(string &a, char arr[],int n){
    int len = a.size();
    for(int j = 0;j<len;j++){
        bool isVowel = false;
        for(int i=0;i<n;i++){
            if(a[j]==arr[i]){
                isVowel = true;
                break;
            }
        }
        a[j] = isVowel ? 'V' : 'C';
    }
}
int main(){
    string a;
    char arr[]={'a','e','i','o','u'};
    int n = sizeof(arr)/sizeof(arr[0]);
    cin>>a;
    CV(a,arr,n);
    cout<<a;
}
