#include<iostream>
using namespace std;
double tempExchange(double celsius);

int main(){
    double Celsius;
    cout << "Please enter a Celsius value:";
    cin >> Celsius;
    cout<< Celsius << " degrees Celsius is " << tempExchange(Celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double tempExchange(double celsius){
    return celsius*1.8 +32.0;
}