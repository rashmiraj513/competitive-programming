#include <iostream>
using namespace std;

int sum(int n) {
    int sum=0;
    for(int i=1;i<=n;i++) sum+=i;
    return sum;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int a, b, finalSum;
	    cin>>a>>b;
	    finalSum=b;
	    for(int i=0;i<a;i++) {
	        finalSum=sum(finalSum);
	    }
	    cout<<finalSum<<endl;
	}
	return 0;
}
