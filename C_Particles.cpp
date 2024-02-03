#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,neg = 0;
    ll maxi = -INF;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(v[i] < 0)
        {
            neg++;
        }
        maxi = max(maxi,v[i]);
    }
    if(neg == n)
    {
        cout << maxi << endl;
        return;
    }
    ll odd_sum = 0,even_sum = 0;
    for(i = 0;i < n;i++)
    {
        if(v[i] > 0)
        {
            if(i & 1)
            {
                odd_sum+=v[i];
            }
            else
            {
                even_sum+=v[i];
            }
        }
    }
    cout << max(odd_sum,even_sum) << endl;
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