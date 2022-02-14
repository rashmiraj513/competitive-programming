#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int M, x, y; cin>>M>>x>>y; int houseLocation[M];
        for(int i=0;i<M;i++) cin>>houseLocation[i];
        int k=0, arr[100]={0}, searchedHouse=x*y;
        while(k<M) {
            int start=houseLocation[k]-searchedHouse-1, end=houseLocation[k]+searchedHouse-1;
            if(start<0) start=0;
            if(end>99) end=99;
            for(int i=start;i<=end;i++) arr[i]=1;
            k++;
        }
        int solution=0;
        for(int i=0;i<100;i++) {
            if(arr[i]==0) solution++;
        }
        cout<<solution<<endl;
    }
    return 0;
}