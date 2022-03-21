#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> vect(n);
        for(int i=0;i<n;i++) {
            cin>>vect[i];
        }
        sort(vect.begin(), vect.end());
        // reverse(vect.begin(), vect.end());
        cout<<vect[0]+vect[1]<<endl;
    }
    return 0;
}