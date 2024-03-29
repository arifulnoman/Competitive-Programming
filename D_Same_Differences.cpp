#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,ans = 0;
    cin >> n;
    unordered_map<ll,ll> mp;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        ans+=mp[temp - i];
        mp[temp - i]++;
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