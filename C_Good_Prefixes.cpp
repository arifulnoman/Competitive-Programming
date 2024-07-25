#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,sum = 0,maxi = 0,ans = 0; cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++) cin >> v[i];
    for(i = 0;i < n;i++)
    {
        sum += v[i];
        maxi = max(maxi,v[i]);
        if(sum - maxi == maxi) ans++;
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