#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,mex = 0;
    cin >> n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] > 0)
        {
            cout << mex << " ";
            mp[mex] = 1;
            while(mp[mex] > 0)
            {
                mex++;
            }
        }
        else
        {
            cout << abs(v[i] - mex) << " ";
            mp[abs(v[i] - mex)] = 1;
        }
    }
    cout << '\n';
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