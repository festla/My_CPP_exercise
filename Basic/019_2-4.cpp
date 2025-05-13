#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: " ;
    cin >> age;
    cout << "Your are " << age << " old, or ";
    cout << 12*age << " months old." << endl;
    return 0;
}