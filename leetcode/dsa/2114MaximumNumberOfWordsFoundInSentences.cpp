#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countWords(string str) {
        int res = 0;
        for(char i : str) {
            if(i == ' ') res++;
        }
        return res + 1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(auto it : sentences) {
            int temp = countWords(it);
            if(res < countWords(it)) res = temp;
        }
        return res;
    }
};