#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    vector<int> temp;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m; j++)
        {
            cin >> v[i][j];
            temp.push_back(v[i][j]);
        }
    }
    if(n == 1 && m == 1)
    {
        cout << -1 << '\n';
        return;
    }
    int count = 1;
    v[n - 1][m - 1] = temp[0];
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            if(i == n - 1 && j == m - 1)
            {
                continue;
            }
            v[i][j] = temp[count++];
        }
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
}

signed main()
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