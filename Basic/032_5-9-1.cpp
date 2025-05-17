#include<iostream>
using namespace std;
int main()
{
    int left,right;
    int sum = 0;
    cout<<"Enter the first number:";
    cin>>left;
    cout<<"Enter the second number:";
    cin>>right;
    for(int i=left;i<=right;i++){
        sum+=i;
    }
    cout<<"Sum from left to right is: "<<sum<<endl;
    return 0;
}