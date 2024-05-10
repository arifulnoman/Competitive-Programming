#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,cnt00 = 0,cnt01 = 0,cnt10 = 0,cnt11 = 0,ans = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n - 1;i+=2)
    {
        if(s[i] == '0' && s[i + 1] == '0')
        {
            cnt00++;
        }
        else if(s[i] == '1' && s[i + 1] == '1')
        {
            cnt11++;
        }
        else if(s[i] == '0' && s[i + 1] == '1')
        {
            cnt01++;
        }
        else
        {
            cnt10++;
        }
    }
    ans = cnt00 * 2 + cnt11 * 2 + ((cnt01 > 0) ? 2 : 0) + ((cnt10 > 0) ? 1 : 0) + ((cnt10 > 1) ? 1 : 0);
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