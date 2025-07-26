#include<iostream>
#include<vector>
#include<string>
using namespace std;
void ToLower(string &str){
    for(int i = 0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i] - 'A' + 'a';
        }
    }
}
int main(){
    string str = "A buffalow run like super Fellow Woho";
    ToLower(str);
    cout<<str;
}