#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > squareSum(int num) {
    vector<vector<int> > res;
    for(int a = 0; a * a < num; a++) {
        for(int b = 0; b * b < num; b++) {
            if(a * a + b * b == num && a <= b) {
                vector<int> newEntry;
                newEntry.push_back(a);
                newEntry.push_back(b);
                res.push_back(newEntry);
            }
        }
    }
    return res;
}
int main() {
    int num; cin >> num;
    vector<vector<int> > res =  squareSum(num);
    for(auto it: res) {
        for(auto it2: it) cout << it2 << " ";
        cout<<endl;
    }
    return 0;
}