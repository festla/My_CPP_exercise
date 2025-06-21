#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int * p1, *p2;
    p1 = &num;
    p2 = &num;

    cout << "num = " << num <<endl;

    *p1 = 20;
    cout << "num = " << num <<endl;

    *p2 = 30;
    cout << "num = " << num <<endl;
    
    return 0;
}