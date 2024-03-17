#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,m,k,ans = 0;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < m;i++)
    {
        cin >> b[i];
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            if(a[i] + b[j] <= k)
            {
                ans++;
            }
        }
    }
    cout << ans << '\n';
}
int main()
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