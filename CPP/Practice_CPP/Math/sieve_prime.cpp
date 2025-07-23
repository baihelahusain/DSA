//Sieve of Eratosthenes algorithm
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Prime(int n){
    int cnt = 0;
    vector<bool> prime(n+1, 1);
    prime[0] = prime[1] = false;
    for(int i =2;i<n;i++){
        if(prime[i]){
            cnt++;
        }
        for(int j = 2*i;j<n;j = i+j){
            prime[j] = 0;
        }
    }
    return cnt;
}
int main(){
    int n = 100;
    cout<<Prime(n);
}