#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,m,k;
    cin >> n >> m >> k;
    vector<ll> v1(n);
    vector<ll> v2(m);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
    }
    for(i = 0;i < m;i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1[0] < v2[m - 1])
    {
        swap(v1[0],v2[m - 1]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if((k & 1) == 0)
    {
        if(v2[0] < v1[n - 1])
        {
            swap(v2[0],v1[n - 1]);
        }
    }
    ll sum = 0;
    for(i = 0;i < n;i++)
    {
        sum+=v1[i];
    }
    cout << sum << endl;
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