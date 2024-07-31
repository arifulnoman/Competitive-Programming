#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,x,ans = 0;
    cin >> n >> x;
    for(int a = 1;a <= x;a++)
    {
        int max_b = min(x - a,n / a);
        for(int b = 1;b <= max_b;b++)
        {
            int c = min(x - a - b,(n - (a * b)) / (a + b));
            ans += c;
        }
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