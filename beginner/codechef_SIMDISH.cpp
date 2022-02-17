#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string firstDish[4], secondDish[4];
        for(int i=0; i<4; i++) cin>>firstDish[i];
        for(int i=0; i<4; i++) cin>>secondDish[i];
        int similarDish=0;
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) if(firstDish[i]==secondDish[j]) similarDish+=1;
        }
        if(similarDish>=2) cout<<"similar"<<endl;
        else cout<<"dissimilar\n";
    }
    return 0;
}