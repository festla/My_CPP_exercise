#include<iostream>
using namespace std;

double convert(double lightYear);

int main(){
    double lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    double dist = convert(lightYear);
    cout << lightYear << " light year = ";
    cout << dist << " astronomical units.";
    return 0;
}

double convert(double lightYear){
    return lightYear*63240;
}