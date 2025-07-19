#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> firstRightGreaterele(vector<int>vec){
    int n = vec.size();
    stack<int> s;
    vector<int>res;
    for(int i = n-1;i>=0;--i){
        while(!s.empty() && vec[i]>=s.top()){
            s.pop();
        }
        res.push_back(s.empty() ? -1: s.top());

        s.push(vec[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    vector<int>vec={1,2,3,5,4,7};
    int n = vec.size();
    vector<int>ans = firstRightGreaterele(vec);
    for(int ele:ans) cout<<ele<<" ";
}