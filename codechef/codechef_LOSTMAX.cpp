#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        vector<int> input; int count=0;
        for(int i=0;i<=50;i++) {
            int x; cin>>x;
            input.push_back(x);
            count++;
            if(getchar()=='\n') break;
        }
        int n=count-1;
        for(int i=0;i<input.size();i++) {
            if(input[i]==n) swap(input[0], input[i]);
        }
        cout<<*max_element(input.begin()+1, input.end())<<endl;
    }
    return 0;
}