#include<iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    
    while(cin.get(ch)){
        if(ch == 26) break;
        cout << ch;
        count++;
    }
    cout << endl << count << " characters read.\n";
    return 0;
}
//书中这段代码在windows7运行，在win11会出现一些问题;改成上面的代码可以正常运行。