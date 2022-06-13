#include <iostream>
#include <algorithm>
#define loop for(int i = 0; i < n; i++)
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int arr[n];
        loop cin >> arr[i];
        int maxSum = arr[0] + arr[n - 1];
        for(int i = n - 1; i > 0; i--) if(arr[i] + arr[i - 1] > maxSum) maxSum = arr[i] + arr[i - 1];
        cout << maxSum << endl;
    }
    return 0;
}