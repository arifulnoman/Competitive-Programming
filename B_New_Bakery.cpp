#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    int diff = b - a + 1;
    if(diff <= 1)
    {
        cout << a * n << '\n';
        return;
    }
    diff = min(diff,n);
    cout << (diff * (max(a,b - diff + 1) + b)) / 2 + (n - diff) * a << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}