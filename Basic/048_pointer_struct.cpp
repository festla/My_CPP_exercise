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

    return 0;
}