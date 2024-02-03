#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(2 * n);
    for(i = 0;i < 2 * n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll sum_x = 0,sum_y = 0;
    for(i = 0;i < n - 1;i++)
    {
        sum_x = sum_x + abs(v[i] - v[i + 1]);
    }
    for(i = n;i < (2 * n) - 1;i++)
    {
        sum_y = sum_y + abs(v[i] - v[i + 1]);
    }
    cout << sum_x + sum_y << endl;
    for(i = 0;i < n;i++)
    {
        cout << v[i] << " " << v[i + n] << '\n';
    }
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