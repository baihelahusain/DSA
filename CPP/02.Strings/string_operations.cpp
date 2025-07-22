#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool Palindrome(string str){
    int n = str.size();
    int s = 0;
    int en = n -1;
    while(s<en){
        if(str[s]!=str[en]){
            return false;
        }
        else{
            s++;
            en--;
        }
    }
    return true;
}

/*string reverse(vector<char>&vec, int n,string str){
    int q = str.size();
    int end = q-1;
    int e = n-1;
    int s = 0;
    int st = 0;
    while(s<=e){
        swap(vec[e--],vec[s++]);
    }
    while(st<end){
        swap(str[end--],str[st++]);
    }
    return str;
}*/

int main(){
    vector<char> arr={'H','u','s','a','i','n'};
    string str = "2Noon2";
    int n = arr.size();
    // cout<<str[0];
    // string str1 = reverse(arr,n,str);
    // cout<<str1<<endl;
    cout<<Palindrome(str);//Output : 0
    // for(char x:arr) cout<<x<<" ";
}