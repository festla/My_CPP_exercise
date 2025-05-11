#include<iostream>
int main(){
    int a,b;
    std::cin >> a >> b;
    int c = a & b;
    std::cout << c << std::endl;
    int d = a | b ;
    std::cout << d << std::endl;
    return 0;
}