#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,sum = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(n < 3)
    {
        cout << -1 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int mid = n / 2;
    int required = v[mid];
    required *= 2;
    required *= n;
    required++;
    int ans = 0;
    if(required <= sum)
    {
        cout << 0 << endl;
        return;
    }
    cout << required - sum << endl;
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