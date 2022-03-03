#include<iostream>
using namespace std;
// Two integer arguments...
int add(int x, int y) { return x+y; }
// Three integer arguments...
int add(int x, int y, int z) { return x+y+z; }
// Two double arguments...
double add(double x, double y) { return x+y; }
// Default arguments...
int add(int x, int y, int z, int w=0) { return x+y+z+w; }
int main() {
    cout<<add(10, 20)<<endl;
    cout<<add(10.3, 20.1)<<endl;
    cout<<add(10, 20, 40, 50)<<endl;
    return 0;
}