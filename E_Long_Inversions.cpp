#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,k,n,ans = 1;
    string s;
    cin >> n >> s;
    for(k = n;k > 1;k--)
    {
        vector<int> flip(n);
        int f = 0;
        for(i = 0;i <= n - k;i++)
        {
            if(!((f + (s[i] - '0')) & 1))
            {
                f^=1;
                flip[i + k - 1] = 1;
            }
            f^=flip[i];
        }
        bool res = true;
        for(i = n - k + 1;i < n;i++)
        {
            if(!((f + (s[i] - '0')) & 1))
            {
                res = false;
                break;
            }
            f^=flip[i];
        }
        if(res == true)
        {
            ans = k;
            break;
        }
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