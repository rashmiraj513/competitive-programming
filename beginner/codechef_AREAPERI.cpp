#include<iostream>
using namespace std;
int main() {
    int l, b, area, peri; cin>>l>>b;
    area=l*b; peri=2*(l+b);
    if(area>peri) cout<<"Area\n"<<area<<endl;
    else if(area<peri) cout<<"Peri\n"<<peri<<endl;
    else cout<<"Eq\n"<<peri<<endl;
    return 0;
}