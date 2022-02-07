#include<iostream>
using namespace std;
int main() {
    int a, b, c, secondHighest;
    cin>>a>>b>>c;
    if(a>b&&a>c) {
        // max = a;
        if(b>c) secondHighest=b;
        else secondHighest=c;
    } else if(b>a&&b>c) {
        // max=b;
        if(a>c) secondHighest=a;
        else secondHighest=c;
    } else {
        // max=c;
        if(a>b) secondHighest=a;
        else secondHighest=b;
    }
    cout<<secondHighest<<endl;
    return 0;
}