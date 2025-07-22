#include<iostream>
#include<string>
using namespace std;
bool isVowel(char c){ 
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';  
}
string str_to_vc(string str){
    int n = str.size();
    string result = "";
    for(char c : str){
        if(isalpha(c)){
            if(isVowel(c)){
                result+='V';
            }
            else{
                result+='C';
            }
        }
        
    }
    return result;

}
int main(){
    string str = "Hello world";
    string str1 = str_to_vc(str);
    cout<<str1;
}