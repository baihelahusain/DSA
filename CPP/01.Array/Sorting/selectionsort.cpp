#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int>&ans){
    for(int i =0;i<ans.size();i++){
        int minIndex = i;
        for(int j=i+1;j<ans.size();j++){
            if(ans[minIndex]>ans[j]) minIndex = j;
        }
        swap(ans[i],ans[minIndex]);
    }
}
int main(){
    vector<int>vec= {2,3,7,6,5};
    SelectionSort(vec);
    for(int i=0;i<vec.size();i++)
        cout<< vec[i]<<" ";
}