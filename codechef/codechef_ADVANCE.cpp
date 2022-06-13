#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int a, x; cin >> a >> x;
        if(a <= x && (a + 200) >= x) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}