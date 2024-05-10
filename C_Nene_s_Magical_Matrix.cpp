#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,sum = 0;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        sum+=((i * i) + ((i - 1) * i));
    }
    cout << sum << " " << 2 * n << '\n';
    for(i = n;i > 0;i--)
    {
        cout << 1 << " " << i << " ";
        for(j = 1;j <= n;j++)
        {
            cout << j << " ";
        }
        cout << '\n';
        cout << 2 << " " << i << " ";
        for(j = 1;j <= n;j++)
        {
            cout << j << " ";
        }
        cout << '\n';
    }
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