#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,odd = 0,even = 0,ans = 0;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        ans = ans + v[i];
        ll minus = odd / 3;
        if(odd == 1 && even == 0)
        {
            minus = 0;
        }
        else if(odd % 3 == 1)
        {
            minus = (odd + 2) / 3;
        }
        cout << ans - minus << " ";
    }
    cout << '\n';
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