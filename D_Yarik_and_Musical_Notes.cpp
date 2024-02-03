#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    ll sum = 0;
    for(auto it : m)
    {
        if(it.first == 1)
        {
            m[2]+=it.second;
            continue;
        }
        sum+=(it.second * (it.second - 1)) / 2;
    }
    cout << sum << '\n';
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