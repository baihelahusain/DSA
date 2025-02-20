#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of 1st number"<<endl;
    cin>>a;
    cout<<"Enter the 2nd number:"<<endl;
    cin>>b;
    char op;
    cout<<"Enter what operation u want to perform:'+','-','*','/','%'"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<"result:"<<(a+b)<<endl;
            break;
        case '-': cout<<"result:"<<(a-b)<<endl;
            break;
        case '*': cout<<"result:"<<(a*b)<<endl;
            break;
        case '/': cout<<"result:"<<(a/b)<<endl;
            break;
        case '%': cout<<"result:"<<(a%b)<<endl;
            break;
        default: cout<<"Enter the valid Operation sign......"<<endl;
    }
}