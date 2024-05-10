#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

int solve_dp(int n,vector<int>& dp)
{
    if(n <= 1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = (solve_dp(n - 1,dp) % MOD + (((n - 1) % MOD * solve_dp(n - 2,dp) % MOD) % MOD * 2) % MOD) % MOD;
}

void solve()
{
    int i,n,k;
    cin >> n >> k;
    for(i = 0;i < k;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x == y)
        {
            n--;
            continue;
        }
        n-=2;
    }
    vector<int> dp(n + 1,-1);
    cout << solve_dp(n,dp) << '\n';
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