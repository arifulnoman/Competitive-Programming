#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,inc = 0;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    for(i = 1;i < n;i++)
    {
        cin >> v[i];
        if(v[i - 1] - v[i] > inc)
        {
            inc = v[i - 1] - v[i];
        }
    }
    for(i = 1;i < n - 1;i++)
    {
        if(v[i] >= v[i - 1])
        {
            continue;
        }
        v[i]+=inc;
        if(v[i] > v[i + 1])
        {
            cout << "No\n";
            return;
        }
    }
    v[n - 1]+=inc;
    if(v[n - 1] < v[n - 2])
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
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