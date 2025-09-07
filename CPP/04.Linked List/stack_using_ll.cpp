#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
class stack{
private:
    Node* topindex;
    int len;
public:
    stack(){
        topindex = nullptr;
        len = 0;
    }
    void push(int n){
        Node* nwNode = new Node(n);
        nwNode -> next = topindex;
        topindex = nwNode;
        len++;
    }
    void pop(){
        if(topindex==nullptr){
            cout<<"overflow"<<endl;
            return;
        }
        Node* temp = topindex;
        topindex = topindex -> next;
        delete temp;
        len--;
    }
    int top(){
        if(topindex == nullptr){
            cout << "Stack is empty!" << endl;
            return -1; 
    }
        return topindex->data;
    }
    int size(){
        return len;
    }
};
int main(){
    stack st;
    st.push(12);
    st.push(13);
    st.push(11);
    st.push(15);
    st.push(16);
    st.push(17);
    st.push(19);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}