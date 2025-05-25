#include <iostream>
using namespace std;

int func_Mul(int a, int b);
void Mul_and_Log(int a, int b);

int main()  //Only the main func must not have the return value;
{
    //int result = func_Mul(4, 5);
    //cout << result <<endl;
    Mul_and_Log(3,2);
    Mul_and_Log(3,4);
    Mul_and_Log(5,6);
    Mul_and_Log(12,3423);

    //return 0;Automately Done
}

int func_Mul(int a, int b){
    return a * b;
}

void Mul_and_Log(int a, int b){
    int result = func_Mul(a,b);
    cout<<result<<endl;
}