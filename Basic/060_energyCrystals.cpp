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

/*void solve() {
    int x;
    cin >> x;
    multiset<int> s = {0, 0, 0};
    int res = 0;
    while (*s.begin() < x) {
        int min_val = *s.begin();
        s.erase(s.begin());
        int new_val = min(min_val * 2 + 1, x); // 限制增长不超过 x
        s.insert(new_val);
        res++;
    }
    cout << res << "\n";
}*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
