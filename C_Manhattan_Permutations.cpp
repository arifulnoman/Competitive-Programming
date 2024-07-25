#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> ans(n);
    for(i = 0; i < n; i++)
    {
        ans[i] = i + 1;
    }
    int start = 0,end = n - 1;
    if(k & 1)
    {
        cout << "No\n";
        return;
    }
    while(start < end && k > 0)
    {
        if((end - start) * 2 <= k)
        {
            swap(ans[start],ans[end]);
            k -= (end - start) * 2;
            start++;
        }
        end--;
    }
    if(k > 0)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    for(i = 0;i < n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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