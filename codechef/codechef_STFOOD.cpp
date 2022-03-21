#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, maxProfit=0; cin>>n; 
        while(n--) {
            int stores, people, price; cin>>stores>>people>>price;
            maxProfit=max(maxProfit, people/(stores+1)*price);
        }
        cout<<maxProfit<<endl;
    }
    return 0;
}