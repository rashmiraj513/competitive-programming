#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                if(abs(arr[j] - arr[i]) <= a) {
                    for(int k = j + 1; k < arr.size(); k++) {
                        if(abs(arr[k] - arr[i]) <= c && abs(arr[k] - arr[j]) <= b) count++;
                    }
                }
            }
        }
        return count;
    }
};