#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
int solve_dp(int i,int j,int mid,string& s,vector<vector<int>>& dp)
{
    if(i > mid)
    {
        return 1;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if(s[i] == s[j] || s[i] == '?' || s[j] == '?')
    {
        return dp[i][j] = solve_dp(i + 1,j + 1,mid,s,dp);
    }
    return dp[i][j] = 0;
}
void solve()
{
    string s;
    cin >> s;
    int i,j,n = s.size(),maxi = 0;
    vector<vector<int>> dp(n,vector<int> (n,- 1));
    for(i = 0;i < n - 1;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            if(!((j - i + 1) & 1))
            {
                int mid = (i + j) / 2;
                if(solve_dp(i,mid + 1,mid,s,dp))
                {
                    if(maxi < j - i + 1)
                    {
                        maxi = j - i + 1;
                    }
                }
            }
        }
    }
    cout << maxi << '\n';
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