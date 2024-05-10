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
    vector<pair<int,int>> ans;
    unordered_map<int,int> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]] = i;
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] == i + 1)
        {
            continue;
        }
        m[v[i]] = m[i + 1];
        ans.push_back({i + 1,m[i + 1] + 1});
        swap(v[i],v[m[i + 1]]);
    }
    cout << ans.size() << '\n';
    for(i = 0;i < ans.size();i++)
    {
        cout << ans[i].first << " " << ans[i].second << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}