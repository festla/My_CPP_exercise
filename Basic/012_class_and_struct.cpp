#include<iostream>
using namespace std;

class Person {
//private:
public:
    std::string name;
    int age;

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << '\n';
    };
};
int main(){
    Person p1;
    p1.name = "John Doe";
    p1.age = 30;
    p1.printInfo();
    return 0;
}