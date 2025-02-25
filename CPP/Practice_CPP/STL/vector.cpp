#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(2,2);//v(2,2) shows the size and initialize by 2 all the elements
    v.push_back(5);//it will the increase the capacity of vector by double
    v.push_back(4);
    v.push_back(35);
    cout<<"Capacity of Vector:"<<v.capacity()<<endl;
    cout<<"Size of Vector:"<<v.size()<<endl;
    cout<<"Vector at index 2 is:"<<v.at(2)<<endl;
    cout<<"front element of vector is:"<<v.front()<<endl;
    cout<<"last element of vector is:"<<v.back()<<endl;
    v.pop_back();
    // v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
/*
Output:
Capacity of Vector:8
Size of Vector:5
Vector at index 2 is:5
front element of vector is:2
last element of vector is:35
2
2
5
4
*/