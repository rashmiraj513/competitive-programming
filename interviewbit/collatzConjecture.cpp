#include <iostream>
using namespace std;
long solve(int a, int b) {
    int i = 1; long int res = a;
    while(1) {
        if(res % 2 == 0) res /= 2;
        else res = res * 3 + 1;
        i++;
        if(i == b) break;
    }
    return res;
}
int main() {
    int a, b; cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}