#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    cout<<"Size of Stack:"<<s.size()<<endl;
    
   
    for (auto i : {1,2,3,7,4,9,7,2,4}) s.push(i);
    s.push(34);
    s.push(61);
 
    s.pop();
    //THIS IS NOT WORK FOR STACK
    // cout<<"1st Element of Queue is:"<<s.front()<<endl; 
    // cout<<"Last element of Queue is:"<<s.back()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
}//LIFO