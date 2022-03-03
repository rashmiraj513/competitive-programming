#include<iostream>
using namespace std;
class Car {
    private:
        int noOfGear; string color;
    public:
        Car(int a, string b) { noOfGear=a; color=b; }
        void printCarInfo() { cout<<"noOfGear: "<<noOfGear<<endl<<"color: "<<color<<endl; }
};
class RaceCar: public Car {
    private:
        int maxSpeed;
    public:
        RaceCar(int a, string b, int c): Car(a, b) { maxSpeed=c; }
        void printInfo() { printCarInfo(); cout<<"maxSpeed: "<<maxSpeed<<endl; }
};
int main() {
    int noOfGear, maxSpeed; string color;
    cin>>noOfGear>>color>>maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}