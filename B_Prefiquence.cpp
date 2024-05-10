#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i = 0,j = 0,n,m,ans = 0;
    string s1,s2;
    cin >> n >> m >> s1 >> s2;
    while(j < m)
    {
        if(s1[i] == s2[j] && i < n)
        {
            i++;
            ans++;
        }
        j++;
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