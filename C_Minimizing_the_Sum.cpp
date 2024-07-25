#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,x,n,k,ans = INF;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> dp(n + 1,vector<int> (k + 1,INF));
    for(i = 0;i <= k;i++)
    {
        dp[0][i] = 0;
    }
    for(i = 1;i <= n;i++)
    {
        for(j = 0;j <= k;j++)
        {
            int mini = INF;
            for(x = i;i - x <= j && x > 0;x--)
            {
                mini = min(mini,v[x - 1]);
                int temp = (i - x + 1) * mini;
                dp[i][j] = min(dp[i][j],dp[x - 1][j - (i - x)] + temp);
            }
        }
    }
    for(i = 0;i <= k;i++)
    {
        ans=min(ans, dp[n][i]);
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