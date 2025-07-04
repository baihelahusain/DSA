#include<iostream>
#include<climits>
using namespace std;
#include<math.h>
int main(){
    int arr[] = {5,15,22,1,-15,24};
    int size = sizeof(arr)/sizeof(arr[0]);
    int small = INT_MAX;
    int large = INT_MIN;
    
    for(int i = 0; i<size; i++){
        small = min(arr[i],small);
        large = max(large,arr[i]);
    }
    cout<<small<<endl;
    cout<<large<<endl;
    return 0;

}