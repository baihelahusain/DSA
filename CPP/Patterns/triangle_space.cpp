#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    char a = 65;
    cin>>n;
    while(i<=n){
        int space;
        space = n - i;
        while(space){
            cout<<" ";
            space--;
        }
            int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        // a++;
        i++;
    }
    
    return 0;
}
/*sh-5.2$ ./triangle_space
5
    *
   **
  ***
 ****
******/