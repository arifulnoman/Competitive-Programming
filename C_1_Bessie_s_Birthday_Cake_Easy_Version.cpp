#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,x,y,ans = 0;
    cin >> n >> x >> y;
    vector<int> v(x);
    for(i = 0;i < x;i++)
    {
        cin >> v[i];
        v[i]--;
    }
    sort(v.begin(),v.end());
    for(i = 1;i < x;i++)
    {
        if(v[i] == v[i - 1] + 2)
        {
            ans++;
        }
    }
    if((v[x - 1] + 2) % n == v[0])
    {
        ans++;
    }
    cout << ans + x - 2 << '\n';
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