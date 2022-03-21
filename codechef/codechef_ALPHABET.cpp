#include<iostream>
using namespace std;
int main() {
    string str; cin>>str; int n; cin>>n;
    int arr[26]={0};
    for(int i=0;i<str.length();i++) arr[(str[i]-'a')]++;
    while(n--) {
        string temp; cin>>temp; bool flag=true;
        for(int i=0;i<temp.length();i++) {
            if(arr[temp[i]-'a']==0) {
               flag=false; break;
            }
            else continue;
        }
        flag?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}