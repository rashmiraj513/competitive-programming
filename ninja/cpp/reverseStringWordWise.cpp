#include<iostream>
using namespace std;
string reverseStringWordWise(string input) {
    string ans="", temp="";
    input=' '+input; int n=input.size();
    for(int i=n-1;i>=0;i--) {
        if(input[i]==' ') {
            ans=ans+temp+' '; temp="";
        } else temp=input[i]+temp;
    }
    return ans;
}
int main() {
    string s; getline(cin, s);
    string ans=reverseStringWordWise(s);
    cout<<ans<<endl;
    return 0;
}