#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i;
    vector<int> v(3);
    for(i = 0;i < 3;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(i = 0;i < 5;i++)
    {
        if(v[0] < v[1])
        {
            v[0]++;
            continue;
        }
        if(v[1] < v[2])
        {
            v[1]++;
            continue;
        }
        v[2]++;
    }
    cout << v[0] * v[1] * v[2] << '\n';
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