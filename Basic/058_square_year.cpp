#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int num = stoi(s);
        
        for(int i=0;i*i<=num;i++){
            int j_square = num-i*i;
            int j = sqrt(j_square);
            if(j*j == j_square){
                cout << i << " " << j << endl;
                
                return 0;
            }
        }
        cout << -1 <<endl;

        return 0;
    }
}