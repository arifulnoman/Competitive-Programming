#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,start = 0,end = 0,n,m,cost = 0,ans = 0;
    cin >> n >> m;
    vector<int> v(n);
    for(i = 0;i < n;i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(end < n)
    {
        cost += v[end];
        while((cost > m || v[end] - v[start] > 1) && start < n)
        {
            cost -= v[start];
            start++;
        }
        ans = max(ans,cost);
        end++;
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