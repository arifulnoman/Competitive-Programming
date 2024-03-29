#include<bits/stdc++.h>
#define int long long
const int MAX = 1e18;
const int MOD = 1e9 + 7;
using namespace std;
#define dbg(a) cout << #a << " = " << a << endl

void solve()
{
    int i,j,n,top = 0,down = 0,mini = MAX;
    cin >> n;
    vector<vector<int>> v(2,vector<int> (n));
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < n;j++)
        {
            cin >> v[i][j];
            if(i == 1)
            {
                down+=v[i][j];
            }
        }
    }
    for(i = n - 1;i >= 0;i--)
    {
        down-=v[1][i];
        mini = min(mini,max(down,top));
        top+=v[0][i];
    }
    cout << mini << '\n';
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