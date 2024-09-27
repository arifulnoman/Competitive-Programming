#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,robin = 0,ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++) cin >> v[i];
    for(i = 0;i < n;i++)
    {
        if(v[i] >= k)
        {
            robin += v[i];
            continue;
        }
        if(robin > 0 && v[i] == 0)
        {
            ans++;
            robin--;
        }
    }
    cout << ans << endl;
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