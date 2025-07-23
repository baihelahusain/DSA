#include<iostream>
#include<string>
using namespace std;
int Javafilechek(string str1, string str2){
    int cnt = 0;
    if(str1.empty()&&str2.empty()){
        return -1;
    }
    if(str1.length()>=5 && str1.substr(str1.length() - 5) == ".java"){
        cnt++;
    }
    if(str2.length()>=5 && str2.substr(str2.length() - 5) == ".java"){
        cnt++;
    }
    
    return cnt;
}
int main(){
    string str1 = "sfd";
    string str2 = "dshf.java";
    cout<<Javafilechek(str1,str2);
}
