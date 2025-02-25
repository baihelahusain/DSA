#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>a={2,4,26,74,54};
    array<int,4>b;
    cout<<"Size of Array:"<<a.size()<<endl;
    cout<<"Array element at index 2 is:"<<a.at(2)<<endl;
    cout<<"1st Element of Array is:"<<a.front()<<endl;
    cout<<"Last element of Array is:"<<a.back()<<endl;
    cout<<"array is empty or not"<<a.empty()<<endl;
    cout<<"array is empty or not"<<b.empty()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
}
//Cant perform push and pop operations in array also the capacity() func not work for array
/*
Output:
Size of Array:5
Array element at index 2 is:26
1st Element of Array is:2
Last element of Array is:54
array is empty or not0
array is empty or not0
2 4 26 74 54 
1651076199 779647075 73728 0
*/