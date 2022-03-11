#include<iostream>
#include<climits>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, sum=0, min=INT_MAX; cin>>n;
        while(n--) {
            int temp; cin>>temp; sum+=temp;
            if(temp<min) min=temp;
        }
        cout<<sum-min<<endl;
    }
	return 0;
}