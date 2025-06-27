#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void solve(){
    char s[4];
    cin>>s;
    int num = stoi(s);
    bool found = false;
    for(int i=0;i*i<=num;i++){
        int j = sqrt(num)-i;
        if(pow(j+i,2) == num){
            cout << i << " " << j << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << -1 <<endl;
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--) solve();
    return 0;
}