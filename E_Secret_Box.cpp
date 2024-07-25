#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,x,y,z,k,ans = 0;
    cin >> x >> y >> z >> k;
    for(i = 1;i <= x;i++)
    {
        for(j = 1;j <= y;j++)
        {
            if(k % (i * j) == 0)
            {
                int temp = k / (i * j);
                if(temp <= z)
                {
                    ans = max(ans,(x - i + 1) * (y - j + 1) * (z - temp + 1));
                }
            }
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