#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr) {
    int res[arr.size() - 1];
    res[0] = arr[0]; res[1] = arr[0] + arr[1];
    for(int i = 2;i < arr.size();i++) {
        res[i] = arr[i] + min(res[i - 1], res[i - 2]);
    }
    return res[arr.size() - 1];
}
int main() {
    int n; cin >> n; vector<int> arr(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    cout << solve(arr) << endl;
    return 0;
} 