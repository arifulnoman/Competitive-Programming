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
    vector<int> v(n - 1);
    for(i = 0;i < n - 1;i++) cin >> v[i];
    vector<int> a(n);
    for(i = 0;i < n - 1;i++)
    {
        a[i] |= v[i];
        a[i + 1] |= v[i];
    }
    for(i = 0;i < n - 1;i++)
    {
        if(v[i] != (a[i] & a[i + 1]))
        {
            cout << -1 << '\n';
            return;
        }
    }
    for(i = 0;i < n;i++) cout << a[i] << " ";
    cout << endl;
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