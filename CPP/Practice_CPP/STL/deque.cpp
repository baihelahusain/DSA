#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d={2,4,26,74,54};
    cout<<"Size of Deque:"<<d.size()<<endl;
    cout<<"Deque element at index 2 is:"<<d.at(2)<<endl;
    cout<<"1st Element of Deque is:"<<d.front()<<endl;
    cout<<"Last element of Deque is:"<<d.back()<<endl;
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    d.push_back(0);
    d.push_front(1);
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    d.pop_front();
    d.pop_back();
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
}
/*
Output:
sh-5.2$ g++ deque.cpp -o deque
sh-5.2$ ./deque
Size of Deque:5
Deque element at index 2 is:26
1st Element of Deque is:2
Last element of Deque is:54
2 4 26 74 54 
1 2 4 26 74 54 0 
2 4 26 74 54 sh-5.2$
*/