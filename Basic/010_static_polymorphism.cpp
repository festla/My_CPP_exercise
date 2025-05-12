#include<iostream>
using namespace std;
/*void print(int i) {
    std::cout << "Printing int: " << i << '\n';
}

void print(double d) {
    std::cout << "Printing double: " << d << '\n';
}

void print(const char* s) {
    std::cout << "Printing string: " << s << '\n';
}*/
template<typename T>
void print(const T& value){
    cout  << "Printing Value: " << value << endl;
}
int main(){
    print(5);          // Calls print(int i)
    print(3.14);       // Calls print(double d)
    print("Hello");    // Calls print(const char* s)
    return 0;
}