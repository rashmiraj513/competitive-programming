#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while(n) {
            int temp = n % 10;
            product *= temp; sum += temp;
            n /= 10;
        }
        return (product - sum);
    }
};