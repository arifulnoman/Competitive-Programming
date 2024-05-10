#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,x,y,n,m,ans = 0;
    cin >> n >> m;
    vector<int> prev(n + 1,-1);
    for(i = 0;i < m;i++)
    {
        cin >> x >> y;
        if(x > y)
        {
            swap(x,y);
        }
        prev[y] = max(prev[y],x);
    }
    int last = 1;
    for(i = 1;i <= n;i++)
    {
        last = max(last,prev[i] + 1);
        ans+=i - last + 1;
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