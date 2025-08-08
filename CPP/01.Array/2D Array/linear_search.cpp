#include<iostream>
using namespace std;
bool linear(int arr[3][3], int k){
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==k)
                return true;
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int k = 15;
    if(!linear(arr,k)){
        cout<< -1;
    }
    else{
        cout<<1;
    }
}
