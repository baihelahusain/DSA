#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cin>>n;
    while(i<=n){
        int j = i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*Output:
5
12345
2345
345
45
5*/