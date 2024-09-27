#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

bool custom_sort(pair<int,int> a, pair<int,int> b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solve()
{
    int i,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(i = 0;i < n;i++) cin >> v[i].first;
    for(i = 0;i < n;i++) cin >> v[i].second;
    sort(v.begin(), v.end(),custom_sort);
    int training_period = 0,ans = 0;
    for(i = 0;i < n;i++)
    {
        ans += v[i].first;
        training_period = max(training_period - v[i].first,(int)0);
        training_period = max(training_period,v[i].second);
    }
    ans += training_period;
    cout << ans + 1 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);  
    solve();
    return 0;
}