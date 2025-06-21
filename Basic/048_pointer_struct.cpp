#include<iostream>
#include<cstring>
using namespace std;

struct Student{
    char name[4];
    int born;
    bool male;
};
int main()
{
    Student stu = {"Yu", 2000, true};
    Student * pstu = &stu;

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    strncpy(pstu->name, "Li", 4);
    pstu->born = 2001;
    (*pstu).born = 2002;
    pstu->male = false;

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    cout << "Address of stu: " << pstu <<endl;
    cout << "Address of stu: " << &stu <<endl;
    cout << "Address of member name: " << &(pstu->name) <<endl;
    cout << "Address of member born: " << &(pstu->born) <<endl;
    cout << "Address of member male: " << &(pstu->male) <<endl;

    cout << "sizeof(pstu) = " << sizeof(pstu) << endl;
    return 0;
}