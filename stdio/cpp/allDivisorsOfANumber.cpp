#include <iostream>
using namespace std;
void printDivisors(int n) {
    for(int i=1;i<=n;i++) if(n%i==0) cout<<i<<" ";
    cout<<endl;
}
int main() {
    int n; cin >> n;
    printDivisors(n);
    return 0;
}