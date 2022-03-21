#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	long long int n; cin>>n;
	vector<long long int> budget(n);
	for(int i=0;i<n;i++) cin>>budget[i];
	sort(budget.begin(), budget.end());
    long long int res=-1, len=budget.size();
    for(int i=0;i<len;i++) {
        res=max(res, budget[i]*(len-i));
    }
    cout<<res<<endl;
	return 0;
}