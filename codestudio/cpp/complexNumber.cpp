#include<iostream>
using namespace std;
class ComplexNumbers {
    public:
        int real, imaginary;
        ComplexNumbers(int r, int i) {
            real=r; imaginary=i;
        }
        void plus(ComplexNumbers &temp) {
            this->real+=temp.real; this->imaginary+=temp.imaginary;
        }
        void multiply(ComplexNumbers &temp) {
            int x=real*temp.real-imaginary*temp.imaginary;
            this->imaginary=real*temp.imaginary+imaginary*temp.real;
            this->real=x;
        }
        void print() {
            cout<<real<<" + i"<<imaginary<<endl;
        }
};
int main() {
    int real1, imaginary1, real2, imaginary2;
    cin>>real1>>imaginary1>>real2>>imaginary2;
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    int choice; cin>>choice;
    if(choice==1) {
        c1.plus(c2);
        c1.print();
    } else if(choice==2) {
        c1.multiply(c2);
        c1.print();
    } 
    return 0;
}