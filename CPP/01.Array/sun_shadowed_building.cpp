#include<iostream>
#include<vector>
using namespace std;
int buildingCnt(vector<int>vec){
    int n = vec.size();
    int cnt = 1, maxi = vec[0];
    for(int i =1;i<n;i++){
        if(vec[i]>maxi){
            cnt++;
            maxi = vec[i];
        }
    }
    return cnt;
}
int main(){
    vector<int>vec = {3,4,4,5,2,3};
    cout<<buildingCnt(vec);
}