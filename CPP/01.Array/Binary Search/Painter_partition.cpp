#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>arr,int n ,int m,int mid){
    int cnt = 1;
    int sum =0;
    for(int i=0;i<n;i++){
        if(sum + arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            cnt++;
            if(cnt>m || mid<arr[i]) {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int allocating(vector<int>vec,int p){
    int s = 0, n = vec.size(), e=0;
    for(int i=0;i<n;i++){
        e+=vec[i];
    }
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(vec,n,p,mid)){
            ans = mid;
            e = mid - 1;
        }  
        else{
            s = mid + 1;
        }
        mid = s+ (e-s)/2;
        
    }
    return ans;
}
int main(){
    vector<int>vec={5,5,5,5};
    int person =2;
    cout<<allocating(vec,person);
}