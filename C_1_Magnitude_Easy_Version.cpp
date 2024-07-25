#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++) cin >> v[i];
    int mini = 0,maxi = 0;
    for(i = 0;i < n;i++)
    {
        int a = mini + v[i];
        int b = abs(mini + v[i]);
        int c = maxi + v[i];
        int d = abs(maxi + v[i]);
        mini = min({a, b, c, d});
        maxi = max({a, b, c, d});
    }
    cout << maxi << '\n';
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