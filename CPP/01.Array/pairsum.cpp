#include<iostream>
#include<vector>
using namespace std;

vector<int> sum_pair(vector<int>vec, int target){
    int size = vec.size();
    int st =0;
    int end = size -1;
    while(st<end){
        int sum =vec[st]+vec[end];
        if(sum==target){
            return {st, end};
        }
        else if(sum<target){
            st++;
        }else{
            end--;
        }
    }
}
int main(){
    vector<int>vec={1,2,3,5,6};
    int size = vec.size();
    int target = 8;
    vector<int>ans = sum_pair(vec,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}