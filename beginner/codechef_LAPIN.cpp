#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str, str_first_half, str_last_half, res;
        cin>>str;
        int n=str.length();
        for(int i=0; i<n/2;i++) {
            str_first_half=str_first_half+str[i];
            str_last_half=str_last_half+str[n-i-1];
        }
        sort(str_first_half.begin(), str_first_half.end());
        sort(str_last_half.begin(), str_last_half.end());
        if(str_first_half==str_last_half) res="YES";
        else res="NO";
        cout<<res<<endl;
    }
    return 0;
}