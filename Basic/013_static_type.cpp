#include <iostream>

int main() {
    int num = 65;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double
    char c = 'c';        // 'c' is statically typed as a char

    c = num;    // This asssigment would convert num's value to ASCII equivalent character
    num = pi; // This assignment would convert pi's value from double type to int type
    
    std::cout << "The value of num is: " << num << '\n';
    std::cout << "The value of pi is: " << pi << '\n';
    std::cout << "The value of c is: "<< c << '\n';
    return 0;
}