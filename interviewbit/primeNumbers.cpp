#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sieve(int n) {
    vector<int> res; int prime[n + 1] = {0};
    prime[0] = 0; prime[1] = 1; 
    for(int i = 2; i * i <= n; i++) {
        if(prime[i] ==0) {
            for(int j = i * 2; j <= n; j += i) prime[j] = i;
        }
    }
    for(int i = 2; i <= n;i++) if(prime[i] == 0) res.push_back(i);
    sort(res.begin(), res.end());
    return res;
}
int main() {
    int num; cin >> num;
    vector<int> res = sieve(num);
    for(auto it: res) cout<< it <<" ";
    return 0;
}