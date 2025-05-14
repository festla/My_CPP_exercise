#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    char ch;
    cin>>num>>ch;
    int i,j;
    int row = sqrt((double)(num+1)/2);
    for(int i=1;i<=row;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=2*(row-i)+1;j>=1;j--){
            cout<<ch;
        }
        cout<<endl;
    }
    for(int i=1;i<=row-1;i++){
        for(int j=1;j<=row-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<num-(2*row*row-1)<<endl;
    return 0;
}