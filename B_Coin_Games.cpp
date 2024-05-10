#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,u = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == 'U')
        {
            u++;
        }
    }
    if(u & 1)
    {
        cout << "YES\n";
        return;
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