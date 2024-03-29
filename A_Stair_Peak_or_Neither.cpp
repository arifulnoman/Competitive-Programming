#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c)
    {
        cout << "STAIR\n";
    }
    else if(a < b  && b > c)
    {
        cout << "PEAK\n";
    }
    else
    {
        cout << "NONE\n";
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