#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int target){
    vector<int>ans;
    int n = vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vec[i]+vec[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main(){
    vector<int>vec={1,2,3,5,6};
    int size = vec.size();
    int target = 8;
    vector<int>ans=pairsum(vec,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
    
