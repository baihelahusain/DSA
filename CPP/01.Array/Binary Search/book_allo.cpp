#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>vec,int n, int m,int mid){
    int stuCNT = 1;
    int sumPages = 0;
    for(int i=0;i<n;i++){
        if(sumPages+vec[i]<=mid){
            sumPages +=vec[i];
        }
        else{
            stuCNT++;
            if(stuCNT>m || vec[i]>mid){
                return false;
            }
            sumPages=vec[i];
        }
    }
    return true;
}
int Bookallocation(vector<int>vec,int m){
    int s=0;
    int n = vec.size();
    int ans=1,e=0;
    for(int i=0;i<n;i++){
        e+=vec[i];
    }
    int mid = s +(e-s)/2;
    while(s<=e){
        if(isPossible(vec,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid+ 1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
}
int main(){
    vector<int>vec = {10,20,30,40};
    int m =2;
    cout<<Bookallocation(vec,m);
}