#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,k,sum = 0,maxi = 0,count = 1;
    cin >> n >> k;
    vector<ll> v(n),v1(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(i < k)
        {
            sum+=v[i];
        }
    }
    cin >> v1[0];
    for(i = 1;i < n;i++)
    {
        cin >> v1[i];
        v1[i] = max(v1[i],v1[i - 1]);
    }
    if(k >= n)
    {
        i = n - 1;
    }
    else
    {
        i = k - 1;
    }
    if(k > n)
    {
        count = k - n;
    }
    else
    {
        count = 0;
    }
    while(i >= 0)
    {
        maxi = max(maxi,sum + v1[i] * count);
        sum = sum - v[i];
        i--;
        count++;
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