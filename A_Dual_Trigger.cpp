#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    vector<int> ans;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '1')
        {
            ans.push_back(i);
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size() & 1)
    {
        cout <<"NO\n";
        return;
    }
    if(ans.size() == 2 && ans[0] + 1 == ans[1])
    {
        cout <<"NO\n";
        return;
    }
    cout <<"YES\n";
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