#include<iostream>
#include<vector>
using namespace std;
void reverseVec(vector<int>&vec,int size){
    int st = 0, en = size-1;
    while(st<en){
        swap(vec[st],vec[en]);
        st++;
        en--;
    }
}
int main(){
    vector<int>vec = {2,4,62,3,55,2,5};
    int size = vec.size();
    reverseVec(vec ,size);
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}