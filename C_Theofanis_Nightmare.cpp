#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,sum = 0,total = 0,count = 1;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    total = v[0];
    sum-=v[0];
    for(i = 1;i < n;i++)
    {
        if(sum > 0)
        {
            count++;
        }
        total+=v[i] * count;
        sum-=v[i];
    }
    cout << total << '\n';
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