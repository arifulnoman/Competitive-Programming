#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll m,k,a1,ak;
    cin >> m >> k >> a1 >> ak;
    ll k_coin = m / k;
    ll n = 0;
    if(k_coin <= ak)
    {
        n = a1 + (k_coin * k);
    }
    else
    {
        n = a1 + (ak * k);
    }
    if(n >= m)
    {
        cout << 0 << endl;
        return;
    }
    ll need = m - n;
    ll ans = need / k;
    need = need % k;
    if(need > 0)
    {
        ll temp = need + k;
        if(k - need <= a1)
        {
            ans++;
        }
        else
        {
            ans = ans + need;
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