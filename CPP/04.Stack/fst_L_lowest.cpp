#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Lowest_ele(vector<int>vec){
    stack<int> st;
    vector<int>res;
    int n = vec.size();
    for(int i = 0;i<n;i++){
        while(!st.empty() && vec[i]<st.top()){
            st.pop();
        }
        res.push_back(st.empty() ? -1 : st.top());
        st.push(vec[i]);
    }
    return res;
}
int main(){
    int size;
    cin>>size;
    vector<int>vec(size);
    for(int i = 0;i<size;i++) cin>>vec[i];
    vector<int>ans = Lowest_ele(vec);
    for(int x : ans) cout<<x<<" ";
}
