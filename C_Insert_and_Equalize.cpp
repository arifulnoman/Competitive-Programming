#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> v(n),dif;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(n > 1)
    {
        for(i = 1;i < n;i++)
        {
            dif.push_back(v[i] - v[i - 1]);
        }
    }
    else
    {
        dif.push_back(v[0]);
    }
    sort(dif.begin(),dif.end());
    ll gcd = dif[0];
    for(i = 1;i < dif.size();i++)
    {
        gcd = __gcd(gcd,dif[i]);
    }
    if(gcd == 0)
    {
        cout << 1 << '\n';
        return;
    }
    if(n > 1)
    {
        for(i = n - 1;i > 0;i--)
        {
            if(v[i] != v[i - 1] + gcd)
            {
                v.push_back(v[i] - gcd);
                break;
            }
        }
    }
    if(v.size() == n)
    {
        v.push_back(v[n - 1] + gcd);
    }
    n++;
    sort(v.begin(),v.end());
    ll count = 0;
    ll maxi = v[n - 1];
    for(i = 0;i < n;i++)
    {
        count = count + abs((maxi - v[i]) / gcd);
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