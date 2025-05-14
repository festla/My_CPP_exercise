#include<iostream>
using namespace std;
const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KG_TO_POUND = 2.2;
int main(){
    int foot;
    int inch;
    int mass;
    cout<<"Enter your height foots: ";
    cin>>foot;
    cout<<"Enter your height inchs: ";
    cin>>inch;
    cout<<"Enter your weight in pounds: ";
    cin>>mass;

    double height = (foot*FOOT_TO_INCH+inch)*INCH_TO_METER;
    double weight = mass/KG_TO_POUND;

    cout<<"Your height in meters is "<<height<<endl;
    cout<<"Your weight in kg is "<<weight<<endl;

    double BMI = weight/(height*height);
    cout<<"Your BMI is "<<BMI<<endl;
    
    return 0;
}