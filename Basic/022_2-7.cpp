#include<iostream>
using namespace std;

void format_print(int hours, int mins);

int main(){
    int hours;
    int mins;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minuts: ";
    cin >> mins;
    format_print(hours, mins);
    return 0;
}

void format_print(int hours, int mins){
    cout << "Time: ";
    cout << hours << ":" << mins << endl; 
}