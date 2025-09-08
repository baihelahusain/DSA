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
class queue{
private:
    Node* top;
    Node* tail;
    int len;
public:
    queue(){
        top = nullptr;
        tail= nullptr;
        len = 0;    
    }
    void push(int n){
        Node* newNode = new Node(n);
        if (tail == nullptr) {  //if Q is empty 
            top = tail = newNode;
        }       
        else {
            tail->next = newNode;
            tail = newNode;
        }
        len++;
    }
    void pop(){
        if(top==nullptr){
            cout<<"Underflow"<<endl;
            return;
        }
        Node* temp = top;
        top = top -> next;
        if (top == nullptr) {   //Q becomes empty here.
            tail = nullptr;
        }
        delete temp;
        len--;
    }
    int front(){
        if(top==nullptr){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return top->data;
    }
    int back(){
        if(tail==nullptr){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return tail->data;
    }
    int size(){
        return len;
    }
};
int main(){
    queue q;
    q.push(16);
    q.push(15);
    q.push(14);
    q.push(13);
    q.push(12);
    q.push(11);
    cout<<"front "<<q.front()<<" and "<<"back "<<q.back()<<endl;
    cout<<"size "<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"front "<<q.front()<<" and "<<"back "<<q.back()<<endl;
    cout<<"size "<<q.size()<<endl;
}