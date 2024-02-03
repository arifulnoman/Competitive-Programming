#include<bits/stdc++.h>
#define ll long long
const ll INF = 1e18;
using namespace std;
bool is_valid(vector<ll> &v,ll n,ll mid,ll x)
{
    int i;
    for(i = 0;i < n;i++)
    {
        if(mid > v[i])
        {
            x = x - (mid - v[i]);
            if(x < 0)
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    ll i,n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    ll start = 0,end = INF;
    ll ans = 0;
    while(start <= end)
    {
        ll mid = start + (end - start) / 2;
        if(is_valid(v,n,mid,x) == true)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
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