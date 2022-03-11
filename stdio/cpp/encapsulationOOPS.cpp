#include<iostream>
using namespace std;
class Student {
    private:
        string name; int roll, age;
    public:
        string getName() { return name; }
        void setName(string temp) { name=temp; }
        int getRoll() { return roll; }
        void setRoll(int temp) { roll=temp; }
        int getAge() { return age; }
        void setAge(int temp) { age=temp; }
};
int main() {
    Student obj;
    obj.setName("Rahul"); obj.setRoll(110); obj.setAge(21);
    cout<<"The name of the Student is "<<obj.getName()<<", the roll number is "<<obj.getRoll()<<", and the age is "<<obj.getAge()<<".";
    return 0;
}