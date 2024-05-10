#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,sum = 0;
    cin >> n;
    vector<int> v(n - 1),ans;
    for(i = 0;i < n - 1;i++)
    {
        cin >> v[i];
    }
    ans.push_back(INF);
    for(i = n - 2;i >= 0;i--)
    {
        sum+=v[i];
        ans.push_back(INF - sum);
    }
    reverse(ans.begin(),ans.end());
    for(i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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