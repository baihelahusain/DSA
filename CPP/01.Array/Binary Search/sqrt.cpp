#include<iostream>
using namespace std;
#include<vector>
int sqrt(int n){
    int s = 0, e = n;
    int mid = s + (e - s)/2;
    long long int ans = 0;
    while(s<=e){
        long long int sq = mid*mid;
        if(sq == n){
            return mid;
        }
        if(sq<n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int a = 1;
    cout<<sqrt(a);
}