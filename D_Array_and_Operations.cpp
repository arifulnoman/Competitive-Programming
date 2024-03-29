#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,k,score = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i = n - 1;i >= n - k;i--)
    {
        score+=(v[i - k] / v[i]);
    }
    for(i = 0;i < n - (2 * k);i++)
    {
        score+=v[i];
    }
    cout << score << '\n';
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