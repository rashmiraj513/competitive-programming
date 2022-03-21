#include<iostream>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        int arr[5], count=0; string str;
        for(int i=0; i<5;i++) cin>>arr[i];
        for(int i=0;i<5;i++) {
            if(arr[i]==1) count++;
        }
        switch(count) {
            case 0: {
                str="Beginner"; break;
            } case 1: {
                str="Junior Developer"; break;
            } case 2: {
                str="Middle Developer"; break;
            } case 3: {
                str="Senior Developer"; break;
            } case 4: {
                str="Hacker"; break;
            } case 5: {
                str="Jeff Dean"; break;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}