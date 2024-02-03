#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,sum = 0;
    cin >> n;
    vector<ll> v(n),res(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(i & 1)
        {
            v[i] = -v[i];
        }
        sum+=v[i];
        res[i] = sum;
    }
    sort(res.begin(),res.end());
    for(i = 0;i < n - 1;i++)
    {
        if(res[i] == res[i + 1] || res[i] == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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