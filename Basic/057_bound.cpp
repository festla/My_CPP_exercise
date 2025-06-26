#include<iostream>
using namespace std;

int main()
{
    int a;
    int num = 0;
    int * p = &num;

    p[-1] = 2;  //out of bound
    p[0] = 3;
    *(p+1) = 4; //out of bound

    cout << "num = " << num << endl;

    return 0;
}
//数组是一个常量指针
//sizeof(numbers)返回的是数组的大小
//sizeof(p) 只能返回4或8 无论是什么指针