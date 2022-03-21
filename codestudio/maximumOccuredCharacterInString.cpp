#include<iostream>
using namespace std;
int main() {
    string str; getline(cin, str); char arr[26]={0};
    for(int i=0;i<26;i++) arr[str[i]-'a']++;
    int mx=0; char result;
    for(int i=0;i<26;i++) {
        if(mx<arr[i]) { mx=arr[i]; result='a'+i; }
    }
    cout<<result<<endl;
    return 0;
}