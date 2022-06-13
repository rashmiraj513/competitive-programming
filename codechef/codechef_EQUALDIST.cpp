#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        (a + b) % 2 ? cout << "NO\n": cout << "YES\n";
    }
	return 0;
}