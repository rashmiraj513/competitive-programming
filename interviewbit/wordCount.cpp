#include <iostream>
using namespace std;
int solve(string str) {
    int res = 0, prev = ' ';
    for(char c: str) {
        if(c != ' ' && prev == ' ') ++res;
        prev = c;
    }
    return res;
}
int main() {
    string str; getline(cin, str);
    cout << solve(str) << endl;
    return 0;
}