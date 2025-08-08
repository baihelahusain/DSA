#include<iostream>
using namespace std;
#include<vector>
vector<int> rowsum(int arr[3][3]){
    vector<int>vec;
    for(int i =0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        vec.push_back(sum);
    }
    return vec;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    vector<int>res = rowsum(arr);
    for(int x:res) cout<<x<<" ";  
}