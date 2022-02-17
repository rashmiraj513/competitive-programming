#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int rows, columns; cin>>rows>>columns;
        cout<<(rows-1)*(columns-1)<<endl;
    }
    return 0;
}