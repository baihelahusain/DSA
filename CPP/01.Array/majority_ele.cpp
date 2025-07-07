#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int major(vector<int>vec){
    int n = vec.size();
    for(int val: vec){
        int freq = 0;
        for(int ele: vec){
            if(ele==val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
    
}
/*there 3 methods 1.brute force by nested loop, 2. by sorting and re intializing freq to 0 and 
3.Mooris ++ -- solution is on leetcode*/
int main(){
    vector<int>vec={1,2,2,2,1,1,2};
    int a = major(vec);
    cout<<a;
}