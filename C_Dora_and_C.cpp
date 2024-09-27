#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,a,b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for(i = 0;i < n;i++) cin >> v[i];
    int divider = __gcd(a,b);
    for(i = 0;i < n;i++) v[i] = v[i] % divider;
    sort(v.begin(),v.end());
    int ans = v[n - 1] - v[0],highest = v[0];
    for(i = 0;i < n - 1;i++)
    {
        highest = v[i] + divider;
        ans = min(ans,highest - v[i + 1]);
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