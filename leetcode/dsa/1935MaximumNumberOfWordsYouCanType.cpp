#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int res = 0;
        text += " ";
        unordered_map<int, int> temp;
        bool flag = true;
        for(int i = 0; i < brokenLetters.size(); i++) temp[brokenLetters[i]] = 1;
        for(int i = 0; i < text.size(); i++) {
            if(text[i] == ' ') {
                if(flag) res++;
                flag = true;
            } else {
                if(temp[text[i]] == 1) flag = false;
            }
        }
        return res;
    }
};