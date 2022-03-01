#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string reverseEachWord(string input) {
    string ans="", temp=""; input=input+" "; int n=input.size();
    for(int i=0;i<n;i++) {
        if(input[i]==' ') {
            reverse(temp.begin(), temp.end()); ans=ans+temp+" "; temp="";
        } else temp=temp+input[i];
    }
    return ans;
}
int main() {
    string str; getline(cin, str);
    string ans=reverseEachWord(str);
    cout<<ans<<endl;
    return 0;
}