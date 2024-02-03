#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> a(n),b(n),c(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    ll maxi = -1e10;
    for(i = 0;i < n;i++)
    {
        c[i] = a[i] - b[i];
        if(maxi < c[i])
        {
            maxi = c[i];
        }
    }
    vector<ll> res;
    for(i = 0;i < n;i++)
    {
        if(c[i] == maxi)
        {
            res.push_back(i + 1);
        }
    }
    cout << res.size() << endl;
    for(i = 0;i < res.size();i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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
