#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll simulate(ll k, ll a, ll b, ll x, ll y) {
    ll total = 0;
    // 尽可能烤第一种肉串
    if (k >= a) {
        ll cnt = (k - a) / x + 1;
        total += cnt;
        k -= cnt * x;
    }
    // 然后烤第二种
    if (k >= b) {
        ll cnt = (k - b) / y + 1;
        total += cnt;
        k -= cnt * y;
    }
    return total;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        // 试两种顺序：先a再b，或先b再a
        ll res1 = simulate(k, a, b, x, y);
        ll res2 = simulate(k, b, a, y, x);
        cout << max(res1, res2) << '\n';
    }
    return 0;
}
