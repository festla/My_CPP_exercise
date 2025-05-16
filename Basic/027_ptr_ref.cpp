#include<iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr = &num;
    cout<<"*ptr = "<<*ptr<<endl;//*ptr解引用=num
    cout<<" ptr = "<< ptr<<endl;//ptr是num的地址
    int &ref = num;             //函数的&参数引用就是别名，通过对别名的修改改变传过来的参数
    cout<<" ref = "<< ref<<endl;//ref是别名
    ref = 1002;
    cout<<" ref = "<< ref<<endl;
    cout<<" num = "<< num<<endl;//可以通过修改ref来修改num
    return 0;
}