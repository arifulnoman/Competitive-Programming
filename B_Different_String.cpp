#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i;
    string s;
    cin >> s;
    for(i = 1;i < s.size();i++)
    {
        if(s[i] != s[0])
        {
            swap(s[0],s[i]);
            cout << "YES\n";
            cout << s << '\n';
            return;
        }
    }
    cout << "NO\n";
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