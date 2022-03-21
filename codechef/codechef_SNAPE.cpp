#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int b, ls; cin>>b>>ls;
	    double min=sqrt(ls*ls-b*b);
	    double max=sqrt(ls*ls+b*b);
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}