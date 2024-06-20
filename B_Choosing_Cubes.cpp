#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,f,k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for(i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target = v[f - 1],flag = 0;
    sort(v.rbegin(), v.rend());
    for(i = 0; i < k; i++)
    {
        if(v[i] == target)
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout << "NO\n";
        return;
    }
    if(k == n || v[k] < target)
    {
        cout << "YES\n";
        return;
    }
    cout << "MAYBE\n";
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