#include <iostream>
#include <stack>
using namespace std;
int priority(char c) {
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}
string infixToPostfix(string s) {
    stack<int> st; string res;
    for(int i=0; i<s.length(); i++) {
        if(s[i]>='a' && s[i]<='z') res.push_back(s[i]);
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')') {
            while(!st.empty() && st.top()!='(') {
                res.push_back(st.top()); st.pop();
            }
            if(!st.empty()) st.pop();
        } else {
            while(!st.empty() && priority(st.top())>=priority(s[i])) {
                res.push_back(st.top()); st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res.push_back(st.top()); st.pop();
    }
    return res;
}
int main() {
	int t; cin>>t;
    while(t--) {
        string s, a; cin>>s;
        a=infixToPostfix(s);
        cout<<a<<endl;
    }
	return 0;
}