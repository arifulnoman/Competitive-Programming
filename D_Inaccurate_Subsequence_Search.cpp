#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m,k,match = 0,ans = 0;
    cin >> n >> m >> k;
    unordered_map<int,int> mp,mp2;
    vector<int> a(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < m;i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    i = 0;
    while(i < m)
    {
        match-=min(mp2[a[i]],mp[a[i]]);
        mp2[a[i]]++;
        match+=min(mp2[a[i]],mp[a[i]]);
        i++;
    }
    if(match >= k)
    {
        ans++;
    }
    for(i = m;i < n;i++)
    {
        if(mp[a[i - m]] > 0)
        {
            mp2[a[i - m]]--;
            if(mp2[a[i - m]] < mp[a[i - m]])
            {
                match--;
            }
        }
        if(mp[a[i]] > 0)
        {
            mp2[a[i]]++;
            if(mp2[a[i]] <= mp[a[i]])
            {
                match++;
            }
        }
        if(match >= k)
        {
            ans++;
        }
    }
    cout << ans << '\n';
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