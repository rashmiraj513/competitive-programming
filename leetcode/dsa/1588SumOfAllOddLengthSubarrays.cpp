#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(auto x : arr) sum += x;
        if(arr.size() < 3) return sum;
        else {
            for(int i = 2; i < arr.size(); i += 2) {
                int k = i + 1;
                while(k) {
                    for(int j = i - k + 1; j < arr.size() - k + 1; j++) {
                        sum += arr[j];
                    }
                    k--;
                }
            }
        }
        return sum;
    }
};