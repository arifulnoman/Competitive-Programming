#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n;
    cin >> n;
    vector<ll> v1(n),v2(n);
    vector<pair<ll,ll>> priority(n);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> v2[i];
    }
    for(i = 0;i < n;i++)
    {
        priority[i].first = v1[i] + v2[i];
        priority[i].second = i;
    }
    sort(priority.rbegin(),priority.rend());
    for(i = 0;i < n;i++)
    {
        if(i & 1)
        {
            v2[priority[i].second]--;
            v1[priority[i].second] = 0;
        }
        else
        {
            v1[priority[i].second]--;
            v2[priority[i].second] = 0;
        }
    }
    ll ans = 0;
    for(i = 0;i < n;i++)
    {
        ans+=v1[i];
        ans-=v2[i];
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