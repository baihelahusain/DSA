#include<iostream>
using namespace std;
int main(){
    int n;
    int num = 1;
    char a = 65;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(j%2 == 0) {
                cout<<a;
                a++;
            }
            else{
                cout<<num;
                num++;
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}
