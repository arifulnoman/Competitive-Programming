#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,m,sum = 0;
    cin >> n >> m;
    vector<ll> a(n),b(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    for(i = n - 1;i >= m;i--)
    {
        if(a[i] < b[i])
        {
            sum+=a[i];
            continue;
        }
        sum+=b[i];
    }
    ll total = sum,mini = INF;
    sum = 0;
    for(i = m - 1;i >= 0;i--)
    {
        if(mini > sum + a[i])
        {
            mini = sum + a[i];
        }
        sum+=b[i];
    }
    cout << total + mini << '\n';
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