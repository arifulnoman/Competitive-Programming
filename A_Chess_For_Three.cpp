#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n = 3,ans = 0;
    vector<int> v(3);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    while(true)
    {
        sort(v.begin(),v.end());
        if(v[1] > 0 && v[2] > 0)
        {
            v[1]--;
            v[2]--;
            ans++;
            continue;
        }
        break;
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] & 1)
        {
            cout << -1 << '\n';
            return;
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