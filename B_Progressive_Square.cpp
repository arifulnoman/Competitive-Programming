#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,c,d,first = 0,next = 0;
    cin >> n >> c >> d;
    unordered_map<int,int> mp;
    vector<int> v(n * n);
    for(i = 0;i < n * n;i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    first = v[0];
    for(i = 0;i < n;i++)
    {
        next = first;
        for(j = 0;j < n;j++)
        {
            if(mp[next] == 0)
            {
                cout << "NO\n";
                return;
            }
            mp[next]--;
            next+=d;
        }
        first+=c;
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