#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,res = 0;
    cin >> n;
    vector<int> v(2 * n);
    for(i = 0;i < 2 * n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i = (2 * n) - 2;i >= 0;i = i - 2)
    {
        res+=v[i];
    }
    cout << res << '\n';
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