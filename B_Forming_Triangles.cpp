#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,ans = 0,prev = 0;
    cin >> n;
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    for(auto it : m)
    {
        ans+=((it.second * (it.second - 1) * (it.second - 2)) / 6);
        ans+=(((it.second * (it.second - 1)) / 2) * prev);
        prev+=it.second;
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