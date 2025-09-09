#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char ch) {
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '^') return 3;
    return 0;
}

string infix_to_postfix(string infi) {
    string ans = "";
    stack<char> st;
    int n = infi.size();

    for(int i = 0; i < n; i++) {
        char c = infi[i];

        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            ans += c;
        }
        else if(c == '(') {
            st.push(c);
        }
       
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); 
        }
        else {
            while(!st.empty() && priority(c) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string exp = "(A-B/C)*(A/K-L)";
    cout << "Infix: " << exp << endl;
    cout << "Postfix: " << infix_to_postfix(exp) << endl;
    return 0;
}