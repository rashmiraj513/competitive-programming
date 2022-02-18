#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n, k; cin>>n>>k;
	    string str; cin>>str;
	    int number_of_lower=0, number_of_upper=0;
	    for(int i=0;i<n;i++) {
	        if(str[i]>='a' && str[i]<='z') number_of_lower++;
	        else if(str[i]>='A' && str[i]<='Z') number_of_upper++;
	    }
	    if(n==1) {
            if(k==0 && number_of_lower==1) cout<<"chef\n";
            else if(k==0 && number_of_upper==1) cout<<"brother\n";
            else if(k>=n) cout<<"both\n";
        } else {
            if(k>=number_of_upper && k>=number_of_lower) cout<<"both\n";
            else if(number_of_upper<number_of_lower && number_of_upper<=k && n>k) cout<<"chef\n";
            else if(number_of_upper>number_of_lower && number_of_lower<=k && n>k) cout<<"brother\n";
            else cout<<"none\n";
        }

	}
	return 0;
}