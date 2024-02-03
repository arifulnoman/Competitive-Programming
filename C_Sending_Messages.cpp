#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,f,a,b,prev = 0,ans = 0;
    cin >> n >> f >> a >> b;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        ll temp = v[i] - prev;
        if(temp * a < b)
        {
            ans+=(temp * a);
        }
        else
        {
            ans+=b;
        }
        prev = v[i];
    }
    if(ans < f)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
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