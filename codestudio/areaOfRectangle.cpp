#include<iostream>
using namespace std;
class Rectangle {
    public:
        int length, breadth;
        Rectangle(int x, int y) { length=x; breadth=y; }
        int getArea() { return length*breadth; }
};
int main() {
    int len, brd; cin>>len>>brd;
    Rectangle r(len, brd);
    cout<<r.getArea()<<endl;
    return 0;
}