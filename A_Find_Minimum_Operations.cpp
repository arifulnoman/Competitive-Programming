#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(n > 0)
    {
        if(n < k || k == 1)
        {
            ans += n;
            cout << ans << '\n';
            return;
        }
        int curr = 1;
        while(curr * k <= n) curr *= k;
        n -= curr;
        ans++;
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