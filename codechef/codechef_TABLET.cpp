#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, b; cin>>n>>b;
        int maximumArea=-1;
        while(n--) {
            int width, height, price; cin>>width>>height>>price;
            if(price<=b) maximumArea=max(maximumArea, width*height);
        }
        if(maximumArea==-1) cout<<"no tablet"<<endl;
        else cout<<maximumArea<<endl;
    }
    return 0;
}