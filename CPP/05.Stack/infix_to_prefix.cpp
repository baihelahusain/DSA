#include<iostream>
#include<string>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch == '-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else if ( ch== '^') return 3;
    return 0;
}
string infix_to_prefix(string infi){
    stack<char>st;
    string ans = "";
    int n = infi.size();
    for(int i = 0;i<n;i++){
        char ch = infi[i];
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0'&&ch<='9'){

        }
    }
    return ans;
}
int main(){
    string infix = "(A+B-c)*(D/c+e) - 7";
    cout<<"Infix:"<<infix<<endl;
    cout<<"Prefix:"<<infix_to_prefix(infix);
}