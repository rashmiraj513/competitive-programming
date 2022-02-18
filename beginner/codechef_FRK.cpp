#include<iostream>
using namespace std;
int main() {
    int n; cin>>n; int res=0;
    while(n--) {
        string str; cin>>str;
        if(str.find("ch")<str.length()) res++;
        else if(str.find("he")<str.length()) res++;
        else if(str.find("ef")<str.length()) res++;
    }
    cout<<res<<endl;
    return 0;
}