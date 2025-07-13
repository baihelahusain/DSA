#include<iostream>
#include<vector>
using namespace std;
int Peak(vector<int>vec){
    int n = vec.size();
    int s = 0 , e = n-1;
    int mid = s + (e - s)/2;
    while(s<e){
        if(vec[mid]<vec[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid ;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int main(){
    vector<int>vec = {3,4,10,5,6};
    cout<<"Peak of Mountain is:"<<Peak(vec);
}