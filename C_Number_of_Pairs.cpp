#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,l,r,ans = 0;
    cin >> n >> l >> r;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i = 0;i < n;i++)
    {
        auto it1 = lower_bound(v.begin() + i + 1,v.end(),l - v[i]);
        auto it2 = upper_bound(v.begin() + i + 1,v.end(),r - v[i]);
        ans+=(it2 - it1);
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