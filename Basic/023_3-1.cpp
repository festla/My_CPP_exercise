#include<iostream>
using namespace std;
const int FOOT_TO_INCH = 12;
int main(){
    int height;
    cout<<"Enter your height in inchs_";
    cin>>height;
    int foot = height/FOOT_TO_INCH;
    int inch = height%FOOT_TO_INCH;
    cout<<"Your height is "<<foot<<" foots and "<<inch<<" inchs."<<endl;
    return 0;
}