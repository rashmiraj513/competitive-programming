#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        int x, y, k, n; cin>>x>>y>>k>>n;
        int neededPage=x-y, flag=0;
        while(n--) {
            int page, cost; cin>>page>>cost;
            if(neededPage<=page && cost<=k) flag=1;
        }
        flag?cout<<"LuckyChef\n":cout<<"UnluckyChef\n";
    }
	return 0;
}