#include<bits/stdc++.h>
#define int long long
const int MAX = 1e18;
const int MOD = 1e9 + 7;
using namespace std;
#define dbg(a) cout << #a << " = " << a << endl

void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    cout << n / 2 << '\n';
    for(i = 1;i < n;i+=2)
    {
        cout << i << " " << i + 1 << " " << min(v[i],v[i - 1]) << " " << MOD << '\n';
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