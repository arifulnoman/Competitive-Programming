#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,sum_row = 0,sum_col = 0;
    cin >> n;
    vector<ll> v1(n),v2(n);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
        sum_row = sum_row + v1[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> v2[i];
        sum_col = sum_col + v2[i];
    }
    ll mini_col = *min_element(v2.begin(),v2.end());
    sum_row = sum_row + (n * mini_col);
    ll mini_row = *min_element(v1.begin(),v1.end());
    sum_col = sum_col + (n * mini_row);
    ll ans = min(sum_col,sum_row);
    cout << ans << endl;
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