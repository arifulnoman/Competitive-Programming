#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m;
    cin >> n;
    vector<int> a(n),b(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    cin >> m;
    vector<int> v(m);
    map<int,int> mp;
    for(i = 0;i < m;i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    bool ok = false;
    for(i = 0;i < n;i++)
    {
        if(b[i] == v[m - 1])
        {
            ok = true;
        }
        if(a[i] != b[i])
        {
            mp[b[i]]--;
            if(mp[b[i]] < 0)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    if(!ok)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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