#include<iostream>
using namespace std;
#include<vector>
void inserSortRec(int i, vector<int>& vec){
    if(i==vec.size()) return;
    int j =i;
    while(j>0 && vec[j-1]>vec[j]){
        swap(vec[j-1], vec[j]);
        j--;
    }
    inserSortRec(i+1, vec);
}
int main(){
    vector<int>vec = {4,2,1,6,7,4,2,1,7,37,5,74,4,0,35,5,3};
    int n = vec.size();
    inserSortRec(0, vec);
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
}