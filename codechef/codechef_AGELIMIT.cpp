#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int x, y, a; cin >> x >> y >> a;
        if(x <= a && y > a) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}