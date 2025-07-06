#include<iostream>
#include<vector>
using namespace std;
void unique(vector<int>&vec,int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans^=vec[i];
    }
    cout<<ans;
    
}
int main(){
    vector<int>vec = {4,1,2,1,2};
    int size = vec.size();
    unique(vec,size);
    
}