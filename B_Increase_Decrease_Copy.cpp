#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,ans = 0,flag = 0,temp = INF;
    cin >> n;
    vector<int> a(n),b(n + 1);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n + 1;i++)
    {
        cin >> b[i];
    }
    for(i = 0;i < a.size();i++)
    {
        int mini = min(a[i],b[i]),maxi = max(a[i],b[i]);
        temp = min(min(abs(a[i] - b[n]),abs(b[n] - b[i])),temp);
        if(b[n] >= mini && b[n] <= maxi)
        {
            flag = 1;
        }
        ans+=maxi - mini;
    }
    if(!flag)
    {
        ans+=temp;
    }
    cout << ans + 1 << '\n';
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