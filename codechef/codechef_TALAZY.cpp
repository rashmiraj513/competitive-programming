#include<iostream>
typedef unsigned long long int ll;
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        ll problem, breakTime, time, result=0; cin>>problem>>breakTime>>time;
        ll temp;
        while(problem!=0) {
            if(problem%2!=0) temp=(problem+1)/2;
            else temp=problem/2;
            result+=temp*time+breakTime; time*=2; problem/=2;
        }
        cout<<result-breakTime<<endl;
    }
    return 0;
}