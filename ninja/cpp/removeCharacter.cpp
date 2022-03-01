#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string removeAllOccurrencesOfChar(string input, char c) {
    input.erase(remove(input.begin(), input.end(), c), input.end());
    return input;
}
int main() {
    string input; char c; cin>>input>>c;
    string output=removeAllOccurrencesOfChar(input, c);
    cout<<output<<endl;
    return 0;
}