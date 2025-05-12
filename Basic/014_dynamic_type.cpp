#include <iostream>
#include <any>

int main() {
    int x = 42;
    float y = 3.14f;
    std::string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << '\n';//告诉编译器转换为int*

    void_ptr = &y;
    std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << '\n';//告诉编译器转换为float*

    void_ptr = &z;
    std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << '\n';//告诉编译器转换为string*


    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << std::any_cast<int>(any_value) << '\n';

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << '\n';

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << '\n';

    return 0;
}