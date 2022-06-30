#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> allFactors(int num) {
    vector<int> res;
    if(num == 1) return { 1 };
    for(int i = 1; i <= sqrt(num); i++) {
        if(num % i == 0) {
            res.push_back(i);
            if(i != num / i) res.push_back(num / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int main() {
    int num; cin >> num;
    vector<int> res = allFactors(num);
    for(auto it: res) cout << it << " ";
    return 0;
}