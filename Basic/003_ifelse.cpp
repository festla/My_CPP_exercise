#include<iostream>
#include<windows.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a > 0){
        cout<<"正数";
    }else if(a < 0){
        cout<<"负数";
    }else{
        cout<<"零";
    }
    return 0;
}