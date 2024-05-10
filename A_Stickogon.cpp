#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,ans = 0;
    cin >> n;
    unordered_map<int,int> m;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    for(auto it : m)
    {
        ans+=it.second / 3;
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