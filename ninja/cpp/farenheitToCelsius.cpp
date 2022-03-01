#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, step, b; cin>>a>>b>>step;
    for(int i=a;i<=b;i+=step) {
        int f=(i-32)*5/9;
        if(f>=0) cout<<i<<" "<<floor(f)<<endl;
        else cout<<i<<" "<<ceil(f)<<endl;
    }
    return 0;
}