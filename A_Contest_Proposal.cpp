#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,maxi = -1;
    cin >> n;
    vector<int> a(n),b(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    for(i = n - 1;i >= 0;i--)
    {
        int count = 0,temp = i;
        while(temp >= 0 && a[temp] > b[i])
        {
            count++;
            temp--;
        }
        maxi = max(maxi,count);
    }
    cout << maxi << '\n';
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