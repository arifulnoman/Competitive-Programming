#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,m;
    cin >> n >> m;
    vector<ll> v1(n),v2(m);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
    }
    ll B = 0,x_max = 0,x_min = 0;
    for(i = 0;i < m;i++)
    {
        cin >> v2[i];
        B = B | v2[i];
    }
    for(i = 0;i < n;i++)
    {
        x_min = x_min ^ (v1[i] | B);
        x_max = x_max ^ v1[i];
    }
    if(n & 1)
    {
        swap(x_min,x_max);
    }
    cout << x_min << " " << x_max << endl;
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