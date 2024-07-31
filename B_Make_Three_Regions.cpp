#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,ans = 0;
    cin >> n;
    vector<string> s(2);
    cin >> s[0] >> s[1];
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(j + 2 < n && i + 1 < 2 && s[i][j] == 'x' && s[i][j + 2] == 'x' && s[i][j + 1] == '.' && s[i + 1][j + 1] == '.' && s[i + 1][j] == '.' && s[i + 1][j + 2] == '.') ans++;
            if(i - 1 >= 0 && j + 2  < n && s[i][j] == 'x' && s[i][j + 2] == 'x' && s[i][j + 1] == '.' && s[i - 1][j] == '.' && s[i - 1][j + 1] == '.' && s[i - 1][j + 2] == '.') ans++;
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