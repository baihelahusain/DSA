#include<iostream>
#include<vector>
using namespace std;
int Pivotele(vector<int>vec){
    int n = vec.size();
    int st = 0, end = n - 1;
    int mid = st + (end - st)/2;
    while(st<end){
        if(vec[mid]>vec[end]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
        mid = st + (end - st)/2;
    }
    return st;
}
int main(){
    vector<int>vec={6,7,8,9,3};
    cout<<Pivotele(vec);
}