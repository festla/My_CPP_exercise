#include<iostream>
using namespace std;
void printSquare(int n);
int main(){
    int n;
    cin >> n;
    printSquare(n);
    return 0;
}
void printSquare(int n){
    cout << n*n << endl;
}