#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    string s1,s2;
    cin >> n >> s1 >> s2;
    for(i = 0;i < n;i++)
    {
        if(s1[i] != '0')
        {
            break;
        }
        if(s1[i] != s2[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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