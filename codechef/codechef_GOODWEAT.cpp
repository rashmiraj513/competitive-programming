#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int arr[7], rainy=0, sunny=0;
	    for(int i=0;i<7;i++) {
	        int temp; cin>>temp; arr[i]=temp;
	        if(temp==1) sunny++;
	        else if(temp==0) rainy++;
	    }
	    sunny>rainy?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}