#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int length[n]; int ratings[n];
        for(int i=0;i<n;i++) cin>>length[i];
        for(int i=0;i<n;i++) cin>>ratings[i];
        int ans=0, answer=0, temp;
        for(int i=0;i<n;i++) {
            if(length[i]*ratings[i]>=ans) {
                if(ratings[i]>answer) {
                    ans=length[i]*ratings[i]; 
                    temp=i; answer=ratings[i];
                }
            }
        }
        cout<<temp+1<<endl;
    }
}