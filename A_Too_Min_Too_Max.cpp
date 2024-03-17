#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << abs(v[n - 1] - v[0]) + abs(v[0] - v[n - 2]) + abs(v[n - 2] - v[1]) + abs(v[1] - v[n - 1]) << '\n';
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