#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int>sum; int i=n, j=m, div=0;
    while(i>0 || j>0 ) {
        int firstArrayNumber=0, secondArrayNumber=0;
        if(i>0) { firstArrayNumber=a[i-1]; i--; }
        if(j>0) { secondArrayNumber=b[j-1]; j--; }
        int add=firstArrayNumber+secondArrayNumber+div;
        if(add>9) {
            sum.push_back(add%10); div=add/10;
        } else { sum.push_back(add); div=0; }
    }
    if(div>0) sum.push_back(div);
    reverse(sum.begin(), sum.end());
    return sum;
}
int main() {
    int t; cin>>t; 
    while(t--) {
        int n, m; cin>>n>>m;
        vector<int>a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<m;j++) cin>>b[j];
        vector<int>res=findArraySum(a, n, b, m);
        for(int x:res) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}