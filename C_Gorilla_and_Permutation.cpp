#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m,k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(i = 0; i < n; i++) v[i] = n - i;
    for(i = 1;i <= m;i++)
    {
        v[n - i] = m - i + 1;
    }
    for(i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
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