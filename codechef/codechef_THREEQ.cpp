#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int ques[3], ans[3]; cin>>ques[0]>>ques[1]>>ques[2]>>ans[0]>>ans[1]>>ans[2];
        int first=0, second=0;
        for(int i=0; i<3; i++) {
            if(ques[i]==1) first++;
            if(ans[i]==1) second++;
        }
        first==second?cout<<"Pass\n":cout<<"Fail\n";
    }
	return 0;
}