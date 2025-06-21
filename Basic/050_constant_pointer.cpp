#include<iostream>
using namespace std;

int main()
{
    int num = 1;
    int another = 2;
    const int * p1 = &num; //You cant change the value the p1 points to through p1
    //*p1 = 3;   error
    num = 3;
    cout << "*p1 = " << *p1 <<endl;

    int * const p2 = &num; //p2的内容不能改变（地址）
    *p2 = 3;    //ok
    //p2 = &another;    //error

    const int * const p3 = &num;
    return 0;
}