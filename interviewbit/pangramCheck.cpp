#include <iostream>
#include <vector>
using namespace std;
int solve(vector<string> &res) {
    int arr[26] = {0};
    for(int i = 0;i< res.size(); i++) {
        for(int j = 0;j < res[i].size(); j++) arr[res[i][j] - 'a']++;
    }
    for(int i = 0;i < 26;i++) if(arr[i] < 1) return 0;
    return 1;
}
int main() {
    int n; cin >> n; vector<string> res(n);
    for(int i = 0; i < n; i++) cin >> res[i];
    cout << solve(res) << endl;
    return 0;
}