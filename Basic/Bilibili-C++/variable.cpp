#include <iostream>
using namespace std;

int main(){
    unsigned int varible = -8;
    short ch = 65;
    float f = 5.5;  //here is actually a double "x";
    //虽然 5.5 默认是 double 类型，但当你将它赋值给 float 变量 f 时，​​隐式类型转换​​会发生：double → float
    cout << "Size of f :" <<sizeof(f)<<endl;
    double d = 3.2;
    cout << "Size of d :" <<sizeof(d)<<endl;
    float f3 = 5.5f; // This is indeed a float
    cout << "Size of f3 :" <<sizeof(f3)<<endl; 
    bool ans = 16; //a bool is 1 byte
    cout<< sizeof(ans) <<endl;  //sizeof is not a func, but a opertor
    return 0;
}