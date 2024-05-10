#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,count = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    if(v[0] != v[n - 1])
    {
        cout << 0 << '\n';
        return;
    }
    int target = v[0];
    for(i = 1;i < n - 1;i++)
    {
        if(v[i - 1] != v[i + 1] && v[i] != target)
        {
            cout << 0 << '\n';
            return;
        }
    }
    int mini = INF;
    for(i = 0;i < n;i++)
    {
        if(v[i] == target)
        {
            count++;
            continue;
        }
        mini = min(mini,count);
        count = 0;
    }
    mini = min(mini,count);
    if(mini == n)
    {
        cout << -1 << '\n';
        return;
    }
    cout << mini << '\n';
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