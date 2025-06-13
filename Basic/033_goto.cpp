#include <iostream>
using namespace std;

float mysquare(float value);

int main()
{
    float value;
    cout<<"Input a float number: ";

    cin>>value;

    float result = mysquare(value);

    if(result>0){
        cout<<"The square is "<<result<<endl;
    }

    return 0;
}

float mysquare(float value){
    float f = 0.0f;

    if(value>=1.0f ||value<0){
        cerr<<"The input is out of range"<<endl;
        goto EXIT_ERROR;
    }
    f = value*value;
    return f;

    EXIT_ERROR:
        return 0.0f;
}