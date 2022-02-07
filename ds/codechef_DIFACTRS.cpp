#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, count=0; cin>>n;
    vector<int> factors;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            count++;
            factors.push_back(i);
        }
    }
    cout<<count<<endl;
    for(int i=0; i<factors.size(); i++) cout<<factors[i]<<" ";
    return 0;
}