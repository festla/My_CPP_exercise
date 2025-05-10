#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,9,3,6,2,5,234,74,324};
    int max=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}