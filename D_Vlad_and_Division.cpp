#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,checker = (1LL << 31) - 1;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    ll maxi = n;
    for(i = 0;i < n;i++)
    {
        if(m[v[i]] > 0)
        {
            m[v[i]]--;
            ll temp = v[i] ^ checker;
            if(m[temp] > 0)
            {
                m[temp]--;
                maxi--;
            }
        }
    }
    cout << maxi << '\n';
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