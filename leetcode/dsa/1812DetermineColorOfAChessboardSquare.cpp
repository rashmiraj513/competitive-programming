#include <iostream>
using namespace std;
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int temp = (int) coordinates[0] + (coordinates[1] - '0');
        if(temp % 2 == 0) return false;
        return true;
    }
};