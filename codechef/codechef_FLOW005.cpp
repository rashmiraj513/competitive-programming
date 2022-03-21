#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int notesArray[6]={1, 2, 5, 10, 50, 100};
    while(t--) {
        int n, notes=0;
        cin>>n;
        for(int i=5;i>=0;i--) {
            while(n>=notesArray[i]) {
                n-=notesArray[i];
                notes++;
            }
        }
        cout<<notes<<endl;
    }
	return 0;
}