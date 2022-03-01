#include<iostream>
using namespace std;
int main() {
    int n; cin>>n; 
    if(n<0) cout<<"Error\n";
    else {
        int fact=1;
        for(int i=1;i<=n;i++) fact*=i;
        cout<<fact<<endl;
    }
    return 0;
}