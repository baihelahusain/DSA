#include<iostream>
#include<string>
using namespace std;
void backtracking(int i){
    if(i<1) return;//base condition
    backtracking(i-1);
    cout<<i;//print when the condition will met upto the starting of function call
}
void space(){
    cout<<endl;
}
string s = "B";
void f(int n){
    if(n==5) 
        return;
    cout<<s<<'\n';
    f(n+1);
}
int main(){
    int n = 0;
    int m = 9;
    backtracking(m);
    space();
    f(n);
}