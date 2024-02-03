#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool check(ll mid,ll n)
{
    ll x = (mid * (mid - 1)) / 2;
    if(x <= n)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;
    ll low = 0,high = 1e10,ans = 0;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        if(check(mid,n))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ll dif = (ans * (ans - 1)) / 2;
    ans = ans + (n - dif);
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