#include<iostream>
#include<vector>
using namespace std;
int Pivot(vector<int>vec){
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
int binary(vector<int>vec,int s, int e, int key){
    int n = vec.size();
    int st = s, end= e;
    int mid = (st + end)/2;
    while(st<end){
        if(vec[mid] == key){
            return mid;
        }
        if(vec[mid]>key){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
        mid = (st + end)/2;
    }
    return -1;
}
int main(){
    vector<int>vec={6,7,8,1,3};
    int n = vec.size();
    int key = 7;
    int pivot = Pivot(vec);
    if(key>= vec[pivot] && key<=vec[n-1]){
        cout<<binary(vec,pivot, n-1,key);
    }
    else{
        cout<<binary(vec,0,pivot-1,key);
    }
}