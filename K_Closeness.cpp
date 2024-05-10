#include <bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i, n, k, ans, maxi = -1;
    cin >> n >> k;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    for (i = 0; i < n; i++)
    {
        int temp = (maxi - v[i]) / k;
        v[i] += temp * k;
    }
    sort(v.begin(), v.end());
    ans = v[n - 1] - v[0];
    v[0] += k;
    ans = min(ans, max(v[0] - v[n - 1], v[0] - v[1]));
    for (i = 1; i < n - 1; i++)
    {
        v[i] += k;
        ans = min(ans, max(v[i] - v[i - 1], v[i] - v[i + 1]));
    }
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}