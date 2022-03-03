#include<iostream>
using namespace std;
class Person {
    private:
        int age; string name;
    public:
        string getName() { return name; }
        int getAge() { return age; }
        void setName(string temp) { name=temp; }
        void setAge(int flag) { age=flag; }
};
int main() {
    int age; string name; cin>>name>>age;
    Person p;
    p.setName(name); p.setAge(age);
    cout<<"The name of the person is "<<p.getName()<<" and the age is "<<p.getAge()<<".";
    return 0;
}