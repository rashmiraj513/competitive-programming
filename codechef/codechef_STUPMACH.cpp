#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long int n, x, ans; cin >> n >> x;
        ans = x;
        for(int j = 1; j < n; j++) {
            long long q; cin >> q; 
            x = min(q, x);
            ans += x;
        }
        cout << ans << endl;
    }
    return 0;
}