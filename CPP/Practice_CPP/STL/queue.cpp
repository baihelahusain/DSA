#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    cout<<"Size of Queue:"<<q.size()<<endl;
    
   
    for (auto i : {1,2,3,7,4,9,7,2,4}) q.push(i);
    q.push(34);
    q.push(61);
 
    q.pop();
    cout<<"1st Element of Queue is:"<<q.front()<<endl;
    cout<<"Last element of Queue is:"<<q.back()<<endl;

    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }

}//FIFO