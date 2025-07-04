#include <iostream>
using namespace std;

int main()
{
    int a=0, b=0, c=0;
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    
    int * p1 = (int*) malloc(4);
    int * p2 = (int*) malloc(4);
    int * p3 = (int*) malloc(4);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    return 0;
}