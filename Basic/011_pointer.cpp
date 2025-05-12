#include<iostream>
using namespace std;
int main(){
    int num = 12;
    int* pnum = &num;  //变量的地址
    cout << "pnum: " << pnum <<endl;
    int& numref = num; //变量的别名
    cout << "numref: " << numref << endl;
    return 0;
}