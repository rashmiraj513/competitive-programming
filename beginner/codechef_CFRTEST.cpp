#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; vector<int> days(n); vector<int>res(n, 1);
        for(int i=0;i<n;i++) cin>>days[i];
        sort(days.begin(), days.end());
        for(int i=n-2;i>=0;i--) {
            if(days[i]==days[i+1]) res[i]=res[i+1];
            else res[i]+=res[i+1];
        }
        cout<<*max_element(res.begin(), res.end())<<endl;
    }
    return 0;
}