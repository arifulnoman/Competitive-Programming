#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0; i < n; i++) cin >> v[i];
    vector<vector<int>> bits(n,vector<int>(21));
    for(i = 0; i < n; i++)
    {
        for(j = 0;j < 21;j++)
        {
            bits[i][j] = (v[i] & (1 << (20 - j))) ? 1 : 0;
            if(i > 0) bits[i][j]+=bits[i - 1][j];
        }
    }
    int ans = 1;
    for(i = 0; i < 21; i++)
    {   
        if(bits[n - 1][i] == 0 || bits[n - 1][i] == n) continue;
        int save = 0,last_index = -1;
        for(j = 0;j < n; j++)
        {
            if(save == bits[j][i]) continue;   
            ans = max(ans,j - last_index);
            save = bits[j][i];
            last_index = j;
        }
        ans = max(ans,n - last_index);
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