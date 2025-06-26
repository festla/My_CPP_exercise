#include<iostream>
using namespace std;

#define PRINT_ARRAY(array, n) \
for(int idx=0;idx<(n);idx++) \
    cout << "array[" <<idx<< "] = " << (array)[idx] << endl;

int main()
{
    int numbers[4] = {0,1,2,3};
    PRINT_ARRAY(numbers, 4)

    int * p = numbers+1; //地址偏移了一个int大小
    p++;                 //地址偏移了一个int大小
    cout << "numbers = " <<numbers << endl;
    cout << "p = " << p << endl;

    *p = 20;
    PRINT_ARRAY(numbers, 4)
    *(p-1) = 10;
    PRINT_ARRAY(numbers, 4)
    p[1] = 30;
    PRINT_ARRAY(numbers, 4)
}