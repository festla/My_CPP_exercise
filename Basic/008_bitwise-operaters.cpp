#include<iostream>
int main(){
    int a,b;
    std::cin >> a >> b;
    int c = a & b;
    std::cout << "按位与："<< c << std::endl;
    int d = a | b ;
    std::cout << "按位或："<< d << std::endl;
    int e = a<<2;
    int f = a>>2;
    std::cout << "对a左移两位：" << e << std::endl;
    std::cout << "对a右移两位：" << f << std::endl;
    return 0;
}