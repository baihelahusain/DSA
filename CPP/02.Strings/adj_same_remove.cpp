#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<char> Remove_adjacent_same(vector<char>arr){
    int n = arr.size();
    vector<char>res;
    res.push_back(arr[0]);
    for(int i = 1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            res.push_back(arr[i]);
        }
    }
    return res;
}
int main(){
    vector<char>arr = {'c','c','a','d','d','d','e','f','g','g'};
    vector<char>a = Remove_adjacent_same(arr);
    for(char c:a) cout<<c<<" ";
}