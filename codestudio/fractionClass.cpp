#include<iostream>
#include<algorithm>
using namespace std;
class Fraction {
    int num, den;
    public:
        Fraction(int first, int second) {
            num=first; den=second;
        }
        void add(Fraction f) {
            num=(num*f.den)+(f.num*den);
            den=(den*f.den);
            int gcd=__gcd(num, den);
            num/=gcd; den/=gcd;
        }
        void multiply(Fraction f) {
            den=den*f.den; num=num*f.num; 
            int gcd=__gcd(num, den);
            num/=gcd; den/=gcd;
        }
        void print() {
            cout<<num<<"/"<<den<<endl;
        }
};
int main() {
    int num, den; cin>>num>>den;
    Fraction first(num, den);
    int choice, t, i; cin>>t;
    for(int i=0;i<t;i++) {
        cin>>choice;
        int num2, den2; cin>>num2>>den2;
        Fraction temp(num2, den2);
        if(choice==1) {
            first.add(temp); first.print();
        }
        if(choice==2) {
            first.multiply(temp); first.print();
        }
    }
    return 0;
}