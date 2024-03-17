#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,k,bullet = 0,prev = 0;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        ll temp;
        cin >> temp;
        if(temp < 0)
        {
            temp = -temp;
        }
        m[temp]+=v[i];
    }
    for(auto it : m)
    {
        bullet+=((it.first - prev) * k);
        it.second-=bullet;
        if(it.second > 0)
        {
            cout << "NO\n";
            return;
        }
        else
        {
            bullet = -it.second;
        }
        prev = it.first;
    }
    cout << "YES\n";
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