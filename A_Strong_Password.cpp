#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,flag = 0;
    string s,ans = "";
    cin >> s;
    ans += s[0];
    for(i = 1;i < s.size();i++)
    {
        if(s[i] == ans.back() && flag == 0)
        {
            if(ans.back() != 'a') ans.push_back('a');
            else ans.push_back('b');
            flag = 1;
        }
        ans.push_back(s[i]);
    }
    if(!flag)
    {
        if(ans.back() != 'a') ans.push_back('a');
        else ans.push_back('b');
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