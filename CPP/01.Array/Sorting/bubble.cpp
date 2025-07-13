#include<iostream>
#include<vector>
using namespace std;
void Bubble(vector<int>&vec){
    int n = vec.size();
    for(int i=1;i<n;i++){
        int temp =1;
        for(int j=0;j<n-1;j++){
            if(vec[j]>vec[j+1]){
                temp = vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            } 
        }
    }
}
int main(){
    vector<int>vec={3,4,2,1,6,5,9,8};
    Bubble(vec);
    for(int nums:vec) cout<<nums<<" ";
}