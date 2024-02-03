#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.rbegin(),v.rend());
    vector<int> ans(n,0);
    for(i = 0;i < n;i++)
    {
        ans[v[i].second] = i + 1;
    }
    for(i = 0;i < n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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