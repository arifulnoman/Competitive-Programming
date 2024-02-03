#include<bits/stdc++.h>
#define ll long long
const ll INF = pow(2,30) - 1;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<vector<ll>> v(n,vector<ll>(n));
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            cin >> v[i][j];
        }
    }
    vector<ll> ans(n);
    for(i = 0;i < n;i++)
    {
        ll temp = INF;
        for(j = 0;j < n;j++)
        {
            if(i != j)
            {
                temp = temp & v[i][j];
            }
        }
        ans[i] = temp;
    }
    for(i = 0;i < n;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            ll x = ans[i] | ans[j];
            if(x != v[i][j])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    for(i = 0;i < n;i++)
    {
        cout << ans[i] << " "; 
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