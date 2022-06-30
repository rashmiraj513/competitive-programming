#include <iostream>
using namespace std;
int solve(int a, int b) {
    int topLeft = min(a, b) - 1;
    int bottomRight = 8 - max(a, b);
    int topRight = min(a, 9 - b) - 1;
    int bottomLeft = 8 - max(a, 9 - b);
    return (topLeft + bottomRight + topRight + bottomLeft);
}
int main() {
    int a, b; cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}