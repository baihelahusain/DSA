#include<iostream>
#include<math.h>
using namespace std;
int Power(int n , int m){
    int res =1;
    int mod = 1e9+7;//Optimizer
    while(m>0){
        if(m&1){
            res = (1LL*res * n)%mod;//1LL is long long int to save the code from int overflow
        }
        n = (1LL*n*n%mod)%mod;
        m=m>>1;
    }
    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<Power(n,m);
}