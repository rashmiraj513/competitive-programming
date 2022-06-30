#include <iostream>
#include <algorithm>
using namespace std;
string findDigitsInBinary(int num) {
    string res = "";
    if(num == 0) return "0";
    while(num) {
        res.push_back(num % 2 + '0'); num /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    int num; cin >> num;
    cout << findDigitsInBinary(num) << endl;
    return 0;
}