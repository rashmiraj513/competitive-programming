#include<iostream>
using namespace std;
class Shape {
    private:
        string shape;
    public:
        void setShape(string a) { shape=a; }
        string getShape() { return shape; }
        void printMyType() { cout<<getShape()<<endl;}
};
class Square: public Shape {
    private:
        int length, breadth;
    public:
        void setLength(int a) { length=a; }
        int getLength() { return length; }
        void setBreadth(int a) { breadth=a; }
        int getBreadth() { return breadth; }
        void printMyType() { cout<<"square\n"; }
        void calculateArea() { cout<<length*length<<endl; }
};
class Rectangle: public Shape {
    private:
        int length, breadth;
    public:
        void setLength(int a) { length=a; }
        int getLength() { return length; }
        void setBreadth(int a) { breadth=a; }
        int getBreadth() { return breadth; }
        void printMyType() { cout<<"rectangle\n"; }
        void calculateArea() { cout<<length*breadth<<endl; }
};
int main() {
    Square sq; sq.setLength(5);
    sq.printMyType(); sq.calculateArea();
    Rectangle r; r.setLength(5); r.setBreadth(4);
    r.printMyType(); r.calculateArea();
    return 0;
}