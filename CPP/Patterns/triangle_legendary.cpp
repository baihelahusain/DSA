#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //space triangle 1
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //2nd triangle
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //3rd triangle
        int a = i-1;
        while(a){
            cout<<a;
            a--;
        }
        cout<<endl;
        i++;

    }
}
    

/*
   1
  121
 12321
1234321*/