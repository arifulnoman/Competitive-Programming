#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for(i = 0;i < n;i++)
    {
        double maxi = -1;
        int id;
        for(j = 0;j < n;j++)
        {
            if(i == j)
            {
                continue;
            }
            double distance = sqrt(((v[i].first - v[j].first) * (v[i].first - v[j].first)) + ((v[i].second - v[j].second) * (v[i].second - v[j].second)));
            if(maxi < distance)
            {
                maxi = distance;
                id = j + 1;
            }
        }
        cout << id << '\n';
    }
    cout << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}