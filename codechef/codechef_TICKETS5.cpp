#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int len=str.size(), count=0, a[26]={0};
        for(int i=0;i<len;i++) a[str[i]-'A']++;
        for(int i=0;i<26;i++) {
            if(a[i]!=0) count++;
        }
        if(count!=2) cout<<"NO\n";
        else {
            count=0;
            for(int i=0;i<len-1;i++) {
                if(str[i]!=str[i+1]) count++;
            }
            if(count==len-1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}