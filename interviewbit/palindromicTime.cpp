#include <iostream>
using namespace std;
int solve(string str) {
    int res = 0;
    int hh = (str[0] - '0') * 10 + (str[1] - '0');
    int mm = (str[3] - '0') * 10 + (str[4] - '0');
    while((hh / 10 != mm % 10) || (mm / 10 != hh % 10)) {
        ++mm;
        if(mm == 60) { mm = 0; ++hh; }
        if(hh == 24) hh = 0;
        ++res;
    }
    return res;
}
int main() {
    string str; cin >> str;
    cout << solve(str) << endl;
    return 0;
}