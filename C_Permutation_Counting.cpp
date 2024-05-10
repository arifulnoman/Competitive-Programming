#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,ans = 0,mini = 0;
    cin >> n >> k;
    vector<int> v(n),prefix_v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    prefix_v[0] = 0;
    int prev = v[0];
    for(i = 1;i < n;i++)
    {
        if(v[i] == prev)
        {
            prefix_v[i] = prefix_v[i - 1];
            continue;
        }
        prefix_v[i] = prefix_v[i - 1] + (v[i] - prev) * i;
        prev = v[i];
    }
    if(prefix_v[n - 1] <= k)
    {
        k-=prefix_v[n - 1];
        mini = v[n - 1] + (k / n);
        ans = mini + ((mini - 1) * (n - 1)) + (k % n);
        cout << ans << '\n';
        return;
    }
    int start = 0,end = n - 1,index = 0;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(prefix_v[mid] <= k)
        {
            index = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    int sum = k;
    for(i = index;i >= 0;i--)
    {
        sum+=v[i];
    }
    mini = sum / (index + 1);
    for(i = 0;i < n;i++)
    {
        if(v[i] >= mini)
        {
            break;
        }
        k-=(mini - v[i]);
    }
    ans = mini + ((mini - 1) * (n - 1)) + k;
    for(i = n - 1;i >= 0;i--)
    {
        if(v[i] <= mini)
        {
            break;
        }
        ans++;
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