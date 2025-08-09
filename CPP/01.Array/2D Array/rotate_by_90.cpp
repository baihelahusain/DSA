#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateBy90(vector<vector<int>> mat){
    vector<int>res;
    int row = mat.size();
    int col = mat[0].size();
    for(int i = 0;i<col;i++){
        for(int j = row - 1;j>=0;j--){
            res.push_back(mat[j][i]);
        }
    }
    return res;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int>r = rotateBy90(matrix);
    for(int x: r) cout<<x<<" ";
}