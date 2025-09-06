#include<iostream>
using namespace std;

class stackimp{
    int topIndex = -1;
    int arr[10];
public:
    void push(int n){
        if(topIndex==9){
            cout<<"stack is full"<<endl;
            return;
        }
        topIndex = topIndex + 1;
        arr[topIndex] = n;
    }
    int top(){
        if(topIndex==-1) {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[topIndex];
    }
    void pop(){
        if(topIndex==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        topIndex = topIndex - 1;
    }
    int size(){
        return topIndex+1;
    }
    
};
int main(){
    stackimp st;//object of stack
    st.push(12);
    st.push(43);
    st.push(23);
    st.push(3);
    st.push(63);
    st.push(93);
    cout<<"top ele of stack is:"<<st.top()<<endl;
    cout<<"size of top:"<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<"top ele of stack is:"<<st.top()<<endl;
    cout<<"size of stack"<<st.size();
    return 0;
}