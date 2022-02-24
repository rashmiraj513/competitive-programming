#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        int n; cin>>n; string str; cin>>str;
        long long int numberOfOnes=0, sum=0;
        for(int i=0; i<n; i++) {
            if(str[i]=='1') numberOfOnes++;
        }
        sum=(numberOfOnes*(numberOfOnes+1))/2;
        cout<<sum<<endl;
    }
	return 0;
}