#include<iostream>
using namespace std;
int main() {
    string str; cin>>str;
    int c=0, h=0, e=0, f=0;
    for(char x:str) {
        if(x=='C') c++;
        else if(x=='H') {
            if(c>0) { h++; c--; }
        } else if(x=='E') {
            if(h>0) { e++; h--; }
        } else {
            if(e>0) { f++; e--; }
        }
    }
    cout<<f;
    return 0;
}