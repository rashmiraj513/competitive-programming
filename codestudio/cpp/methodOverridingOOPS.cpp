#include<iostream>
using namespace std;
class Parent {
    public:
        void show() { cout<<"Inside Parent class\n"; }
};
class Child1: public Parent {
    public:
        void show() { cout<<"Inside Child1 class\n"; }
};
class Child2: public Parent {
    public: 
        void show() { cout<<"Inside Child2 class\n"; }
};
int main() {
    Child1 obj; Child2 temp;
    obj.show(); temp.show();
    return 0;
}