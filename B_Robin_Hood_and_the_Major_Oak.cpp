#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,k;
    cin >> n >> k;
    int start = n - k + 1;
    if(n & 1)
    {
        int temp = ((n - start) / 2) + 1;
        if(temp & 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
    if(start & 1)
    {
        int temp = ((n - start) / 2) + 1;
        if(temp & 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
    int temp = (n - start) / 2;
    if(temp & 1) cout << "NO\n";
    else cout << "YES\n";
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