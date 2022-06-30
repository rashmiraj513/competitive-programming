#include <iostream>
using namespace std;
int reverse(int n) {
    long long int res = 0;
    while(n) {
        res = res * 10 + n % 10; n /= 10;
        if(res > INT_MAX  || res < INT_MIN) return 0;
    }
    return res;
}
int main() {
    int n; cin >> n;
    cout << reverse(n) << endl;
    return 0;
}