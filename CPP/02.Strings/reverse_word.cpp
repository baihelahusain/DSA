#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(string &word){
    int i = 0, j = word.size() - 1;
    while(i<j){
        swap(word[i++],word[j--]);
    }
}
string reverse_word(string str){
    string word;
    string res;
    for(int i = 0;i<str.size();i++){
        if(str[i]!=' '){
            word.push_back(str[i]);
        }
        else{
            reverse(word);
            res+= word + " ";
            word = "";
        }
    }
    if(!word.empty()){
        reverse(word);
        res+=word;
    }
    return res;
}
int main(){
    string str = "My name is Hussain";
    cout<<reverse_word(str);
}



