#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cin>>n;
    while(i<=n){
        char start = 'A'+ n - i;
        int j = 1;
        while(j<=i){
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
/*Output:
3
C
BC
ABC*/