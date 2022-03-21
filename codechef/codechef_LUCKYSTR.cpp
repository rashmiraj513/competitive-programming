#include<iostream>
using namespace std;
int main() {
    int k, n; cin>>k>>n; string str[k];
    for(int i=0;i<k;i++) cin>>str[i];
    while(n--) {
        string s; bool flag=false; cin>>s;
        if(s.length()>=47) flag=true;
        else {
            for(int i=0;i<k;i++) if(s.find(str[i])!=string::npos) flag=true;
        }
        flag?cout<<"Good\n":cout<<"Bad\n";
	}
	return 0;
}