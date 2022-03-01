#include<utility>
#include<iostream>
using namespace std;
pair <int, int> swap(pair <int, int> swapValues) {
    int temp=swapValues.first;
    swapValues.first=swapValues.second;
    swapValues.second=temp;
    return swapValues;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b; cin>>a>>b;
        pair value(a,b);
        pair res=swap(value);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}