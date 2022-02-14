#include<iostream>
using namespace std;
int main() {
    int n, k; cin>>n>>k; int arr[n]={0};
    while(k--) {
        string action; int clicks; cin>>action;
        if(action=="CLICK") {
            cin>>clicks; arr[clicks-1]=!arr[clicks-1];
        } else {
            for(int i=0;i<n;i++) arr[i]=0;
        }
        int count=0;
        for(int i=0;i<n;i++) if(arr[i]==1) count++;
        cout<<count<<"\n";
    }
    return 0;
}