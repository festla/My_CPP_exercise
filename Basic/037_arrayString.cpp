#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char rabbit[16]={'P','e','t','e','r'};
    cout<<"String length is "<<strlen(rabbit)<<endl;
    for(int i=0;i<16;i++){
        cout<<i<<":"<<+rabbit[i]<<"("<<rabbit[i]<<")"<<endl;
    }
    char bad_one[9] = {'P','e','p','p','a',' ','P','i','g'};
    char good_one[10] = {'P','e','p','p','a',' ','P','i','g','\0'};
    
    //Pig's bad name is (Peppa PigPeter)数组类型的字符串后面一定要加一个'\n'
    //Pig's good name is (Peppa Pig)
    cout<<"Rabbit is ("<<rabbit<<")"<<endl;
    cout<<"Pig's bad name is ("<<bad_one<<")"<<endl;
    cout<<"Pig's good name is ("<<good_one<<")"<<endl;

    return 0;
}