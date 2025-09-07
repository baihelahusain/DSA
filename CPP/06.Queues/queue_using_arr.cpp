#include<iostream>
using namespace std;
class queue_imply{
    int st = 0, en = 0;
    int arr[100];
public:
    void push(int n){
        if(en==99){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[en] = n;
        en++;
    }
    int front(){
        if(st==en){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[st];
    }
    int size(){
        return en-st;
    }
    void pop(){
        if(st==en){
            cout<<"stack is emtpy"<<endl;
        }
        st = st + 1;
    }
    bool empty(){
        return st==en;
    }
    int back(){
        if(st==en){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[en-1];
    }
};
int main(){
    queue_imply q;
    q.push(32);
    q.push(31);
    q.push(33);
    q.push(34);
    q.push(36);
    q.push(23);
    q.push(63);
    q.push(74);
    q.push(24);
    cout<<"front ele of Q:"<<q.front()<<endl;
    cout<<"back ele of Q:"<<q.back()<<endl;
    cout<<"sizeof queue:"<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    cout<<"after pop the front ele of Q is:"<<q.front()<<endl;
}