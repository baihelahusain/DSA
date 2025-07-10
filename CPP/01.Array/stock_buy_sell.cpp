#include<iostream>
#include<vector>
using namespace std;
int MaxProfit(vector<int>vec){
    int n = vec.size();
    int bestbuy=vec[0], MP = 0;
    for(int i=0;i<n;i++){
        if(bestbuy<vec[i]){
            MP = max(MP,vec[i]-bestbuy);
        }
        bestbuy=min(bestbuy,vec[i]);
    }
    return MP;
}
int main(){
    vector<int> vec={2,3,5,2,9,8,1,5};
    int a = MaxProfit(vec);
    cout<<a;
}