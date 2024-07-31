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
    for(i = 0; i < n; i++) cin >> v[i];
    bool ok = true;
    for(i = 1;i < n;i++)
    {
        if((v[i] & 1) != (v[0] & 1))
        {
            ok = false;
            break;
        }
    }
    if(!ok)
    {
        cout << -1 << '\n';
        return;
    }
    cout << 39 << '\n';
    for(i = 0;i < 39;i++)
    {
        int mini = *min_element(v.begin(),v.end());
        int maxi = *max_element(v.begin(),v.end());
        int mid = mini + (maxi - mini) / 2;
        cout << mid << " ";
        for(int j = 0;j < n;j++)
        {
            v[j] = abs(v[j] - mid);
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