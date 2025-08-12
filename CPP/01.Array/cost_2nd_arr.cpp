/* we have given array we have to find the max - min cost of array while 
inserting the element in 2nd array from the the first arr*/
#include<iostream>
#include<vector>
using namespace std;
int FindCost(vector<int>vec){
    int n = vec.size();
    int maxi = vec[n-1];
    int ans = 0;
    for(int i = n-2;i>= 0; i--){
        ans += maxi - vec[i];
    }
    return ans;
}
int main(){
    vector<int> vec = {3,5,10,10,10};
    cout<< FindCost(vec);
}
