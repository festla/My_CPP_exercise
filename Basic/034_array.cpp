#include<iostream>
using namespace std;

int main()
{
    int len=1;
    while(len<10){
        int num_array2[len];
        cout<<"len: "<<len;
        cout<<", sizeof(num_array2) = "
               <<sizeof(num_array2)<<endl;
        len++;
    }
    return 0;
}
/*[{
	"resource": "/e:/Code/My_CPP_exercise/Basic/034_array.cpp",
	"owner": "C/C++: IntelliSense",
	"code": "28",
	"severity": 8,
	"message": "表达式必须含有常量值",
	"source": "C/C++",
	"startLineNumber": 8,
	"startColumn": 24,
	"endLineNumber": 8,
	"endColumn": 27,
	"relatedInformation": [
		{
			"startLineNumber": 8,
			"startColumn": 24,
			"endLineNumber": 8,
			"endColumn": 27,
			"message": "变量 \"len\" (已声明 所在行数:6) 的值不可用作常量",
			"resource": "/e:/Code/My_CPP_exercise/Basic/034_array.cpp"
		}
	]
}] */