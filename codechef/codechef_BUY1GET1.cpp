#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        sort(str.begin(), str.end());
        int count=0;
        for(int i=0;i<str.length();i++) {
            if(str[i]==str[i+1]) { count++; i++; }
            else count++;
        } 
        cout<<count<<endl;
    }
	return 0;
}