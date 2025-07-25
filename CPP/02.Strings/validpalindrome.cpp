class Solution {
private:
    char tolower(char str){
        if(str>='A' && str<='Z'){
            return str - 'A' + 'a';
        }
        else{
            return str;
        }
    }
    bool valid(char str){
         if(str>='A' &&str<='Z'||str>='a'&&str<='z'||str>='0'&&str<='9'){
            return 1;
         }
         return 0;
    }
    bool checkpalindrome(string a){
        int i = 0 , j = a.size() - 1;
        while(i<j){
            if(a[i]!=a[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0;i<s.size();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i = 0;i<temp.size();i++){
            temp[i] = tolower(temp[i]);
        }
        return checkpalindrome(temp);
    }
};
