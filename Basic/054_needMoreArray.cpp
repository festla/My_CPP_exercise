#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int res = 0;
    int last = -1e9;
    for(int i=0;i<n;i++){
        if(a[i]>last+1){
            res++;
            last=a[i];
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
