#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i = 0,j = 0,ans = 0;
    string s;
    cin >> s;
    int n = s.size();
    while(i < n)
    {
        while(i < n && s[i] != '0')
        {
            i++;
        }
        while(j < i && s[j] != '1')
        {
            j++;
        }
        if(s[i] == '0' && s[j] == '1')
        {
            ans+=(i - j + 1);
            swap(s[i],s[j]);
        }
        i++;
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