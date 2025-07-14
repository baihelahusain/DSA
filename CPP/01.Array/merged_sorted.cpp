#include<iostream>
#include<vector>
using namespace std;

vector<int> mergearr(vector<int>a1,vector<int>a2,vector<int>&a3){
    int i = 0, j=0;
    int n = a1.size(), m=a2.size();
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            a3.push_back(a1[i++]);
        }
        else{
            a3.push_back(a2[j++]);
        }
    }
    while(i<n){
        a3.push_back(a1[i++]);
    }
    while(j<m){
        a3.push_back(a2[j++]);
    }
    return a3;
}
int main(){
    vector<int>v1={1,3,5,6,8};
    vector<int>v2={2,4,7};
    vector<int>v3;
    mergearr(v1,v2,v3);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}