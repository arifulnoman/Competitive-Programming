#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,prev = 0,count = 1;
    cin >> n;
    vector<int> a(n),b(n),ans1(2 * n),ans2(2 * n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    prev = a[0];
    for(i = 1;i < n;i++)
    {
        if(a[i] != prev)
        {
            if(ans1[prev - 1] < count)
            {
                ans1[prev - 1] = count;
            }
            count = 1;
            prev = a[i];
            continue;
        }
        count++;
    }
    if(ans1[prev - 1] < count)
    {
        ans1[prev - 1] = count;
    }
    prev = b[0],count = 1;
    for(i = 1;i < n;i++)
    {
        if(b[i] != prev)
        {
            if(ans2[prev - 1] < count)
            {
                ans2[prev - 1] = count;
            }
            count = 1;
            prev = b[i];
            continue;
        }
        count++;
    }
    if(ans2[prev - 1] < count)
    {
        ans2[prev - 1] = count;
    }
    int ans = 0;
    for(i = 0;i < 2 * n;i++)
    {
        ans = max(ans,ans1[i] + ans2[i]);
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