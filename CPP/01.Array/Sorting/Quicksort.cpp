#include<iostream>
using namespace std;
#include<vector>
int quickLogic(vector<int>&vec, int low, int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(vec[i]<=vec[pivot] && i<high) i++;
        while(vec[j]>=vec[pivot] && j>=low) j--;
        if(i<j) swap(vec[i],vec[j]);
    }
    swap(vec[low],vec[j]);
    return j;
}
void quickSort(vector<int>&vec, int low, int high){
    if(low<high){
        int PI = quickLogic(vec, low,high);
        quickSort(vec,low,PI-1);
        quickSort(vec,PI+1,high);
    }
}
int main(){
    vector<int>vec = {6,3,1,2,6,5,8,9,4};
    int n = vec.size();
    quickSort(vec, 0, n-1);
    for(int x:vec) cout<<x<<" ";
}