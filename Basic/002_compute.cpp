#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    int sub = a-b;
    int time = a*b;
    int q = a/b;
    
    cout<<"a + b = "<<sum<<endl;
    cout<<"a - b = "<<sub<<endl;
    cout<<"a * b = "<<time<<endl;
    cout<<"a / b = "<<q;
    return 0;
}