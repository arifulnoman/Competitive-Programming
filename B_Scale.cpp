#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,k;
    cin >> n >> k;
    vector<string> s(n);
    int lap = n / k,count = 0;
    for(i = 0;i < n;i++)
    {
        cin >> s[i];
    }
    vector<string> ans(lap);
    for(i = 0;i < n;i += k)
    {
        for(j = 0;j < n;j += k)
        {
            ans[count].push_back(s[i][j]);
        }
        count++;
    }
    for(i = 0;i < lap;i++)
    {
        cout << ans[i] << endl;
    }
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