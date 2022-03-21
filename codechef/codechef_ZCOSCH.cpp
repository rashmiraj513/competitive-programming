#include<iostream>
using namespace std;
int main() {
    long rank, scholarship; cin>>rank;
    if(rank>=1 && rank<=50) scholarship=100;
    else if(rank>=51 && rank<=100) scholarship=50;
    else scholarship=0;
    cout<<scholarship<<endl;
    return 0;
}