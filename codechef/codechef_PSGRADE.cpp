#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a_min, b_min, c_min, t_min, a, b, c;
        cin>>a_min>>b_min>>c_min>>t_min>>a>>b>>c;
        int total=a+b+c;
        if(a>=a_min && b>=b_min && c>=c_min && total>=t_min) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}