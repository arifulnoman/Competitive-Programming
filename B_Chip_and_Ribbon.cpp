#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    ll count = 0,maxi = 1;
    if(v[0] > 1)
    {
        count = v[0] - 1;
        maxi = v[0];
    }
    for(i = 1;i < n;i++)
    {
        if(v[i] <= maxi)
        {
            maxi = v[i];
        }
        else
        {
            count = count + v[i] - maxi;
            maxi = v[i];
        }
    }
    cout << count << '\n';
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