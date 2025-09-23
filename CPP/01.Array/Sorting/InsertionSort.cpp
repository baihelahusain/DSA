#include<iostream>
using namespace std;
#include<vector>
void insertion_sort(vector<int>&vec){
  int n = vec.size();
  for(int i = 0; i<n; i++){
    int j = i;
    while(j>0 && vec[j-1]>vec[j]){
      swap(vec[j-1], vec[j]);
      j--;
    }
  }
}
int main(){
vector<int> vec = {9,6,3,2,1};
insertion_sort(vec);
for(int x: vec){
  cout<<x<<" ";
}
}
