#include<iostream>
#include<vector>
using namespace std;
int GCD(int n1 , int n2){
    int res = 0;
    /*while (b != 0) {
    int temp = b; This is more optimal solution
    b = a % b;
    a = temp;
}*/
    while(n1>0 && n2>0){
        if(n1>=n2){
            n1 = n1 - n2;
        }
        else{
            n2 = n2 -n1;
        }
    }
    res = max(n1,n2);
    
    return res;
}
int main(){
    int n1= 121, n2=23;
    cout<<GCD(n1,n2);
}