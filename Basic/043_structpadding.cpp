#include<iostream>
using namespace std;
struct Student1{
    int id;
    bool male;
    char label;
    float weight;
};
struct Student2{
    int id;
    bool male;
    float weight;
    char label;
};

int main()
{
    cout<<"Size of Student 1: "<<sizeof(Student1)<<endl;
    cout<<"Size of Student 2: "<<sizeof(Student2)<<endl;
}