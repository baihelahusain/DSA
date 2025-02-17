#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cin >> n;
    while(i<=n){
        int a = n-i+1;//2ndmethod for this pattern
        int j = 1;//j = i this is easy way for this pattern
        while(j<=a){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*Output:
4
****
***
**
*
*/
