#include<iostream>
using namespace std;

int fact(int a){
    if (a==0) return 1;
    int ans = 1;
    for(int i=1;i<=a;i++)
    ans= ans*i;
    return ans;
}
int ncr(int n,int r){
    if(r>n) return 0;
    int num = fact(n);
    int deno = fact(r)*(fact(n-r));
    return num/deno;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r); 
}