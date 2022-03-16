#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int a=0, b=0, c=0, d=0, e=0;
        while(n--) {
            string temp; cin>>temp;
            if(temp=="cakewalk") a=1;
            else if(temp=="simple") b=1;
            else if(temp=="easy") c=1;
            else if(temp=="easy-medium" || temp=="medium") d=1;
            else if(temp=="medium-hard" || temp=="hard") e=1;
        }
        (a==1 && b==1 && c==1 && d==1 && e==1)?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}