#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, res; cin >> a >> b;
        if(a % 3 == 0 || b % 3 == 0) res = 0;
        else if(a % 3 == b % 3) res = 1;
        else res = 2;
        cout << res << endl;
    }
    return 0;
}