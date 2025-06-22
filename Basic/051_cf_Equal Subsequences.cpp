#include <iostream>
#include <cstring>
using namespace std;

void construct_bitstring(int n, int k)
{
    for(int i=1;i<=k;i++){
        cout << 1;
    }
    for(int i=k+1;i<=n;i++){
        cout << 0;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,k;
        cin>>n>>k;
    
        construct_bitstring(n,k);

        t--;

    }
}