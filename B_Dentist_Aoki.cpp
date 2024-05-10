#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m;
    cin >> n >> m;
    unordered_map<int,int> mp;
    for(i = 0;i < m;i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    for(auto it : mp)
    {
        if(it.second & 1)
        {
            n--;
        }
    }
    cout << n << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}