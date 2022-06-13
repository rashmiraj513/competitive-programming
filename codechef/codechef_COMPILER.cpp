#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {    
        int a = 0, b = 0;
        string str; cin >> str;
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '<') b++;
            else {
                b--;
                if(b < 0) break;
            }
            if(b == 0) a = i + 1;
        }
        cout << a << endl;
    }
    return 0;
}