#include <iostream>
#define loop for(int i = 0; i < n; i++)
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, res; cin >> n; int arr[n];
        loop cin >> arr[i];
        int ones = 0, minusOnes = 0;
        loop {
            if(arr[i] == 1) ones++;
            else minusOnes++;
            if(n % 2) {
                res = -1; break;
            } else res = (abs(ones - minusOnes)) / 2;
        }
        cout << res << endl;
    }
    return 0;
}