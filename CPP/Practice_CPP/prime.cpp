#include<iostream>
using namespace std;
int main() {
    int n;
    int i = 2;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"The Number "<<n<<" is not Prime for "<<i<<endl;
        }
        else{
            cout<<n<<" is Prime Number"<<endl;
        }
        i = i+ 1;
    }
}
