#include <iostream>
using namespace std;
int solve(int a, int b) {
    const int MOD = 1e7;
    return (a % MOD + b % MOD) % MOD;
}
int main() {
    int a, b; cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}