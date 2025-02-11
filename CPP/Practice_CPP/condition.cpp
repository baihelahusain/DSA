#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if (a>18){
        cout<<"You can ride because you are above "<< 18 <<endl;
    }
    else if(a>15){
        cout<<"If U want to take a ride have to pay extra charges because You are below 18"<<endl;
    }
    else{
        cout<<"You can't ride Sorry....."<<endl;
    }
};

