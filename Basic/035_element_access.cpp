#include<iostream>
using namespace std;

int main()
{
    int nums_arr1[5];//out of boundary
    for(int index=-1;index<=5;index++){
        nums_arr1[index] = index*index;
    }
    for(int idx=-1;idx<=5;idx++){
        cout<<nums_arr1[idx]<<endl;
    }
    return 0;
}