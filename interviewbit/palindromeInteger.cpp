#include <iostream>
using namespace std;
int isPalindrome(int n) {
    string res = to_string(n);
    for(int i = 0; i < res.length(); i++) {
        if(res[i] != res[res.length() - 1 - i]) return 0;
    }
    return 1;
}
int main() {
    int n; cin >> n;
    cout << isPalindrome(n) << endl;
    return 0;
}