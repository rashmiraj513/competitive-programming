#include<iostream>
using namespace std;
int main() {
	int principal, time; double rate; cin>>principal>>rate>>time;
    cout<<(int)(principal*time*rate)/100<<endl;
    return 0;
}