#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> dp(n + 1);
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    dp[0] = 0;
    for(i = n - 1;i >= 0;i--)
    {
        dp[i] = dp[i + 1] + 1;
        if(i + v[i] + 1 <= n)
        {
            dp[i] = min(dp[i],dp[v[i] + i + 1]);
        }
    }
    cout << dp[0] << '\n';
}
int main()
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