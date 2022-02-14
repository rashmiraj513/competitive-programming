#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int goals[n]; int fouls[n];
        for(int i=0;i<n;i++) cin>>goals[i];
        for(int i=0;i<n;i++) cin>>fouls[i];
        int points[n];
        for(int i=0;i<n;i++) {
            int temp=goals[i]*20-fouls[i]*10;
            if(temp<0) temp=0;
            points[i]=temp;
        }
        cout<<*max_element(points, points+n)<<endl;
    }
    return 0;
}