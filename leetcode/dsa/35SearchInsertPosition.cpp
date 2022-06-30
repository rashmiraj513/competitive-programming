#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1, mid, res = -1;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                res = mid; break;
            } else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        if(res == -1) return low;
        return res;
    }
};