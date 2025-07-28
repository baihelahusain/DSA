#include<iostream>
#include<vector>
using namespace std;
bool isSorted(int v[], int m){
    int sum = 0;
    if(m<0)
        return sum;
    if(m==1)
        return sum = v[0];//base case
    
    if(v[0]>v[1])
        return false;
    return isSorted(v+1,m - 1);
}
int main(){
    int vec[]={1,2,3,4,5,5};
    int m = 5;
    cout<<isSorted(vec,m);
}