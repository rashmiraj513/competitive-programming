#include<iostream>
#include<cstring>
using namespace std;
string removeConsecutiveDuplicates(string input) {
    if(input.size()==0 || input.size()==1) return input;
    string ans=""; int i=0, j=0;
    ans=ans+input[i++];
    while(i<input.size()) {
        if(input[i]!=ans[j]) {
            ans=ans+input[i]; j++;
        }
        i++;
    }
    return ans;
}
int main() {
    string str; cin>>str;
    string ans=removeConsecutiveDuplicates(str);
    cout<<ans<<endl;
    return 0;
}