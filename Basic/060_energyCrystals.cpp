#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int crystals[3]={0,};
    int x;
    cin>>x;
    cout<<__lg(x)*2+3<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
