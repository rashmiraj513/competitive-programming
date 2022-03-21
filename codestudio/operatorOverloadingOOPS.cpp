#include<iostream>
using namespace std;
class Complex {
    private:
        int real, imaginary;
    public:
        Complex(int a=0, int b=0) { real=a; imaginary=b; }
        Complex operator +(Complex const &temp) {
            Complex a;
            a.real=real+temp.real; a.imaginary=imaginary+temp.imaginary;
            return a;
        }
        void print() { cout<<real<<" + i"<<imaginary<<endl; }
};
int main() {
    Complex c1(10, 4), c2(3, 5);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}