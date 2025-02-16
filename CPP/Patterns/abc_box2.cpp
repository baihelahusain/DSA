/*5
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
sh-5.2$ g++ abc_box2.cpp -o abc_box2
sh-5.2$ ./abc_box2
formula = A+n-1 for inverted pattern
5
EFGHI
DEFGH
CDEFG
BCDEF
ABCDE
sh-5.2$ */
#include<iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j = 1;
        char start = 'A'+ i - 1;
        while(j<=n){
            // char a = 'A'+i+j-2; 2nd method to print this pattern
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
