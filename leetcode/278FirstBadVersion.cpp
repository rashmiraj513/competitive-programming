#include<iostream>
#include<vector>
using namespace std;
bool isBadVersion(int version) {
    // Already defined.
}
class Solution {
    public:
    int firstBadVersion(int n) {
        int firstVersion=1, lastVersion=n;
        while(firstVersion<=lastVersion) {
            long long int midVersion=firstVersion+(lastVersion-firstVersion)/2;
            if(isBadVersion(midVersion)) lastVersion=midVersion-1;
            else firstVersion=midVersion+1;
        }
        return (lastVersion+1);
    }
};

// The API isBadVersion is already defined.
// bool isBadVersion(int version);