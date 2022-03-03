#include<iostream>
using namespace std;
class Box {
    private:
        int length, *breadth, height;
    public:
        Box() { breadth=new int;}
        void set_values(int a, int b, int c) { length=a; *breadth=b; height=c; }
        void show_data() { cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl<<"Height = "<<height<<endl; }
        Box(Box &sample) { length=sample.length; breadth=new int; *breadth=*(sample.breadth); height=sample.height; }
        ~Box() { delete breadth; }
};
int main() {
    Box b1, b2;
    b1.set_values(10, 20, 30);
    b1.show_data();
    b2=b1; // Shallow Copy (It can be achieved by using assignment operator or, default copy constructor.)
    b2.show_data();
    Box b3(b1); // Deep Copy (For perform deep copy, we have to define our own customized class.)
    b3.show_data();
    return 0;
}