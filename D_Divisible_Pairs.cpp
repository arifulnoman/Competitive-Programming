#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,x,y,ans = 0;
    cin >> n >> x >> y;
    vector<ll> v(n);
    map<pair<ll,ll>,ll> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        ans+=m[{(x - (v[i] % x)) % x,v[i] % y}];
        m[{v[i] % x,v[i] % y}]++;
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