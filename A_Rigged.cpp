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
        cin >> v[i].first >> v[i].second;
    }
    for(i = 1;i < n;i++)
    {
        if(v[i].first >= v[0].first && v[i].second >= v[0].second)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << v[0].first << endl;
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