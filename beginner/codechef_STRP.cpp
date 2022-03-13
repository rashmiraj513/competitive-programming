#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, temp=0; string str; cin>>n>>str;
        for(int i=0;i<n;i++) {
            if(str[i]==str[i+1]) i++;
            temp+=1;
        }
        cout<<temp<<endl;
	}
	return 0;
}