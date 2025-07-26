#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stock_span(vector<int> vec){
    vector<int>temp;
    stack <pair<int,int>> s;
    for(int i = 0;i<vec.size();i++){
        while(!s.empty()&&vec[i]>s.top().first){
            s.pop();
        }
        temp.push_back(s.empty()? -1:s.top().second);
        s.push({vec[i],i});
    }
    for(int i = 0;i<temp.size();i++){
        temp[i] = i - temp[i];
    }
    return temp;
}
int main(){
    vector<int>vec = {7,8,3,2,4,5,6,9};
    vector<int>v = stock_span(vec);
    for(int x:v) cout<<x<<" ";
}