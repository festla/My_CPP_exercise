#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[] = "xiang tan university";
    char name2[] = "xiang tan"     " university";
    char name3[] = "asdf";
    cout<<"strlen for name1: "<<strlen(name1)<<endl;
    cout<<"strlen for name2: "<<strlen(name2)<<endl;
    cout<<"strlen for name3: "<<strlen(name3)<<endl;
    cout<<"size of name1:"<<sizeof(name1)<<endl;
    cout<<"size of name2:"<<sizeof(name2)<<endl;
    cout<<"size of name3:"<<sizeof(name3)<<endl;
    return 0;
}