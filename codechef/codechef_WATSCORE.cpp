#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int total=0; int score[11];
        for(int i=0;i<11;i++) score[i]=0;
        for(int i=0;i<n;i++) {
            int problem, marks; cin>>problem>>marks;
            if(problem<=8) {
                if(score[problem-1]<marks) score[problem-1]=marks;
            }
        }
        for(int i=0;i<8;i++) total+=score[i];
        cout<<total<<endl;
    }
    return 0;
}