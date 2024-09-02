#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int a,b;
    cin >> a >> b;
    if(a & 1)
    {
        cout << "NO\n";
        return;
    }
    if((b & 1) && (a < 2 && !(a & 1)))
    {
        cout << "NO\n";
        return;
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