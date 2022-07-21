#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int horizontalSize = horizontalCuts.size(), verticalSize = verticalCuts.size();
        int horizontalMax = max(horizontalCuts[0], h - horizontalCuts[horizontalSize - 1]);
        int verticalMax = max(verticalCuts[0], w - verticalCuts[verticalSize - 1]);
        for(int i = 1; i < horizontalSize; i++) horizontalMax = max(horizontalMax, horizontalCuts[i] - horizontalCuts[i - 1]);
        for(int i = 1; i < verticalSize; i++) verticalMax = max(verticalMax, verticalCuts[i] - verticalCuts[i - 1]);
        int res = (1LL * horizontalMax * verticalMax) % 1000000007;
        return res;
    }
};