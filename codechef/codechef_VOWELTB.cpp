#include<iostream>
using namespace std;
int main() {
    char c; cin>>c;
    int ascii=(int)c;
    if(ascii==65 || ascii==69 || ascii==73 || ascii==79 || ascii==85) cout<<"Vowel\n";
    else cout<<"Consonant\n";
    return 0;
}