#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,m,x = 0,y = 0,flag = 0;
    cin >> n >> m;
    vector<string> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            if(v[i][j] == '#')
            {
                y = j;
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    flag = 0;
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(v[j][i] == '#')
            {
                x = j;
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    cout << x + 1 << " " << y + 1 << '\n';
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