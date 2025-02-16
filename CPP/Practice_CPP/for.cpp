/*#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<=15;i+=2){
        cout<<i<<" ";
        if(i&1)//this is the condition to check odd
        {
            continue;
        }
        i++;//increment to 3 if the if condition get false
    }
}
*/
/*#include<iostream>
using namespace std;
int main(){
    for(int i =1;i<=5;i++){
        for(int j = i; j<=5; j++){
            cout<<i<<' '<<j<<' '<<endl;
        }
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    for(int i =1;i<=5;i++){
        for(int j = i; j<=5; j++){
            if(i+j==10){
                break;
            }
            cout<<i<<' '<<j<<' '<<endl;
        }
    }
}