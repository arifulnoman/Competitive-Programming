#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,m,power = 0;
    cin >> n >> m;
    int l = n,r = n,ans = n;
    while(m >= (1 << power))
    {
        ans|=(1 << power);
        power++;
    }
    for(int i = power;i <= 32;i++)
    {
        ans|=(((n + m) & (1 << i)));
        if(n - m > 0)
        {
            ans|=(((n - m) & (1 << i)));
        }
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