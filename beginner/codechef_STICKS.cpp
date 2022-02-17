#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int ans[1001]={0};
        for(int i=0; i<n; i++) ans[arr[i]]+=1;
        int area=1; bool flag=false, turn=false;
        for(int i=n-1; i>=0; i--) {
            if(!flag) {
                if(ans[i]>=2) {
                    area*=i; flag=true; ans[i]-=2;
                }
            }
            if(flag) {
                if(ans[i]>=2) {
                    area*=i; flag=false; turn=true; break;
                }
            }
        }
        turn?cout<<area<<endl:cout<<"-1"<<endl;
    }
    return 0;
}