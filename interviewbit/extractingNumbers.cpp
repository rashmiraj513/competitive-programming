#include <iostream>
using namespace std;
int solve(string str) {
    long int res = 0, num = 0;
    for(int i = 0;i < str.length();i++) {
        if(str[i] >= '0' && str[i] <= '9') num = num * 10 + (str[i] - '0');
        else {
            res += num; num = 0;
        }
    }
    res += num;
    return res;
}
int main() {
    string str; cin >> str;
    cout << solve(str) << endl;
    return 0;
}