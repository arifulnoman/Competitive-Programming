#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int mini = 0,maxi = INF;
    for(i = 0;i < n - 1;i++)
    {
        int l,r;
        if(v[i] < v[i + 1])
        {
            l = 0;
            r = (v[i] + v[i + 1]) / 2;
        }
        else if(v[i] > v[i + 1])
        {
            l = (v[i] + v[i + 1] + 1) / 2;
            r = INF;
        }
        else
        {
            l = 0;
            r = INF;
        }
        maxi = min(maxi,r);
        mini = max(mini,l);
    }
    if(mini <= maxi)
    {
        cout << mini << '\n';
        return;
    }
    cout << -1 << '\n';
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