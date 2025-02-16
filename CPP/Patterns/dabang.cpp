/*

1234554321
1234**4321
123****321
12******21
1********1

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //1st triangle
        int a = n-i+1;
        int j = 1;
        while(j<=a){
            cout<<j;
            j++;
        }
        //2nd triangle
        int star = 2*(i-1);
        while(star){
            cout<<'*';
            star--;
        }

        //3rd triangle
        int b=n-i+1;
        while(b){
            cout<<b;
            b--;
        }
        
        
        cout<<endl;
        i++;
    }
}
