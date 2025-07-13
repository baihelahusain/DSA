#include<iostream>
#include<vector>
using namespace std;
int Ans(vector<int>& vec, int key) {
    int start = 0, end = vec.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (vec[mid] == key) return mid;
        if (vec[start] <= vec[mid]) {
            if (key >= vec[start] && key < vec[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        else {
            if (key > vec[mid] && key <= vec[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>vec = {6,8,11,2,3,4};
    int key = 3;
    cout<<Ans(vec,key);
}