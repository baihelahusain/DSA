#include <iostream>
#include<vector>
using namespace std;
vector<int> func(vector<int>vec){
    vector<int>an;
    for(int i=0;i<vec.size();i++){
        int ans = 1;
        for(int j=0;j<vec.size();j++){
            if(vec[j]!=vec[i]){
                ans*=vec[j];
            }        
        }
        an.push_back(ans);
    }
    return an;
}
int main(){
    vector<int>vec={1,2,3,4};
    vector<int> a = func(vec);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}