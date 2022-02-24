#include <iostream>
#include <algorithm>
using namespace std;
#define loop(i, n) for(int i=0;i<n;i++)
void solve() {
    int n, p=0; cin>>n; int pie[n], weight[n];
    loop(i, n) cin>>pie[i];
    loop(i, n) cin>>weight[i];
    sort(pie, pie+n); sort(weight, weight+n);
    loop(i, n) {
        loop (j, n) {
            if(pie[i]<=weight[j]) {
                p++; weight[j]=-1; break;
            }
        }
    }
    cout<<p<<endl;
}
int main() {
	int t; cin>>t;
	while(t--) solve();
	return 0;
}
