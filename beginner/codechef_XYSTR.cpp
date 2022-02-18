#include<iostream>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string str; cin>>str; int count=0;
        for(int i=0;i<str.size();i++) {
            if(str[i]=='x' && str[i+1]=='y') {
                count++; i++;
            } else if(str[i]=='y' && str[i+1]=='x') {
                count++; i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}