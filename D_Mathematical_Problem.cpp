#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,ans = INF;
    string s;
    cin >> n >> s;
    if(n < 3)
    {
        cout << stoi(s) << '\n';
        return;
    }
    for(i = 0;i < n - 1;i++)
    {
        int res = 1;
        for(j = 0;j < n;j++)
        {
            if(i == j)
            {
                int temp = stoi(s.substr(j, 2));
                if(res < 2 || temp < 2) res *= temp;
                else res += temp;
                j++;
                continue;
            }
            int temp = s[j] - '0';
            if(res < 2 || temp < 2) res *= temp;
            else res += temp;
        }
        ans = min(ans, res);
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