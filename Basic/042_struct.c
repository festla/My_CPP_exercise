#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef
struct _Student{
    char name[4];
    int born;
    bool male;
} Student;

int main()
{
    Student stu1 = {"Liu",2012,'true'};

    printf("Student %s, born in %d, gender %s\n",
        stu1.name,
        stu1.born,
        stu1.male ? "male" : "female");
    Student students[100];
    students[50].born = 2002;
    return 0;
}