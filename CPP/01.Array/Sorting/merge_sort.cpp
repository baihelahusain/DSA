#include<iostream>
#include<vector>
using namespace std;
void merge(int l, int mid, int r, vector<int>&vec){
    int left = l;
    int right = mid + 1;
    vector<int> temp;
    while(left<=mid && right<=r){
        if(vec[left]<vec[right]){
            temp.push_back(vec[left]);
            left++;
        }
        else{
            temp.push_back(vec[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(vec[left]);
        left++;
    }
    while(right<=r){
        temp.push_back(vec[right]);
        right++;
    }
    for(int i = l; i<=r; i++){
        vec[i] = temp[i-l];
    }
}
void merge_sort(int left, int right, vector<int>&vec){
    if(left == right) return;
    int mid = (left+right)/2;
    merge_sort(left, mid, vec);
    merge_sort(mid+1, right, vec);
    merge(left, mid, right, vec);
}
int main(){
    vector<int>vec = {1,6,4,3,6,7,7,3,2,2,3,6,7,8,9};
    int n = vec.size();
    int left = 0;
    int right = n-1;
    merge_sort(left,right, vec);
    for(int i = 0; i<vec.size();i++) cout<<vec[i]<<" ";
}