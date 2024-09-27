#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

int solve_dp(vector<vector<int>>& v,int n,int row,int col,int maxi)
{
    if(col < 0 || col >= v.size()) return 0;
    if(row == 2 * n - 1)
    {
        return maxi;
    }
    int sum1 = solve_dp(v,n,row + 1,col,maxi);
    int sum2 = 0;
    if(row < n) sum2 = solve_dp(v,n,row + 1,col + 1,maxi);
    else sum2 = solve_dp(v,n,row + 1,col - 1,maxi);
    maxi = max(maxi + sum1,maxi + sum2);
}

void solve()
{
    int i,j,length = 1,n,flag = 0;
    cin >> n;
    vector<vector<int>> v(2 * n);
    for(i = 0;i < 2 * n;i++)
    {
        for(j = 0;j < length;j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        if(length == n) flag = 1;
        if(flag == 1) length--;
        if(flag == 0) length++;
    }
    solve_dp(v,n,0,0,0);
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