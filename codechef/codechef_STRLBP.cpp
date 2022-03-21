#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int count=0;
        for(int i=0; i<str.size();i++) {
            if(str[i]!=str[i+1]) count++;
        }
        if(str[7]!=str[0]) count++;
        count>2?cout<<"non-uniform\n":cout<<"uniform\n";
    }
    return 0;
}