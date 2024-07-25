#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,ans = 1,count = 0;
    string s;
    cin >> s;
    for(i = 1;i < s.size();i++)
    {
        if(s[i] == '0' && s[i - 1] == '1')
        {
            ans++;
        }
    }
    for(i = 0;i < s.size() - 1;i++)
    {
        if(s[i] == '0' && s[i + 1] == '1')
        {
            count++;
        }
    }
    if(count > 1)
    {
        ans+=count - 1;
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