#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int countTriples(int n) {
        int res = 0;
        for(int i = 3; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int temp = i * i + j * j;
                int num = sqrt(temp);
                if(sqrt(temp) <= n && num * num == temp) res++;
            }
        }
        return res * 2;
    }
};