#include <iostream>
#include <vector>
using namespace std;
vector<int> solve(string str) {
    vector<int> res; int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] != ',') ans = ans * 10 + (str[i] - '0');
        else {
            res.push_back(ans); ans = 0;
        }
    }
    res.push_back(ans);
    return res;
}
int main() {
    string str; cin >> str;
    vector<int> res = solve(str);
    for(auto it: res) cout << it <<" ";
    return 0;
}