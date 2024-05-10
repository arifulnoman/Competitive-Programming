#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n,a,b;
    cin >> n >> a >> b;\
    if(2 * a <= b)
    {
        cout << n * a << '\n';
        return;
    }
    if(n & 1)
    {
        int temp = n / 2;
        cout << a + temp * b << '\n';
        return;
    }
    cout << (n / 2) * b << '\n';
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