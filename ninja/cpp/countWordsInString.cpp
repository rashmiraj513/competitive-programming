#include<iostream>
using namespace std;
int countWords(string input) {
    int res=1;
    for(int i=0;i<input.size();i++) {
        if(input[i]==' ') res++;
    }
    return res;
}

int main() {
    string input; getline(cin, input);
    cout<<countWords(input)<<endl;
    return 0;
}