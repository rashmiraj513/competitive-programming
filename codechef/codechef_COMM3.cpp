#include<iostream>
#include<cmath>
using namespace std;
int distance(int x1, int y1, int x2, int y2) {
    return (pow((x1-x2), 2) + pow((y1-y2), 2));
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n, chef_x, chef_y, server_x, server_y, sous_x, sous_y; string res;
        cin>>n>>chef_x>>chef_y>>server_x>>server_y>>sous_x>>sous_y;
        int chef_server=distance(chef_x, chef_y, server_x, server_y); int square=n*n;
        int chef_sous=distance(chef_x, chef_y, sous_x, sous_y);
        int server_sous=distance(server_x, server_y, sous_x, sous_y);
        if(chef_server<=square && chef_sous<=square && server_sous<=square) res="yes";
        else if(chef_server<=square && server_sous<=square) res="yes";
        else if(chef_server<=square && chef_sous<=square) res="yes";
        else if(chef_sous<=square && server_sous<=square) res="yes";
        else res="no";
        cout<<res<<endl;
    }
    return 0;
}