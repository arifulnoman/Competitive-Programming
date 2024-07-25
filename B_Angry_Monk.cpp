#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,ans = 0;
    cin >> n >> k;
    vector<int> v(k);
    for(i = 0;i < k;i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(i = 0;i < k - 1;i++)
    {
        ans += (2 * (v[i] - 1)) + 1;
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
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}