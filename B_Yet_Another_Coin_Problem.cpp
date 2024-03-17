#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
int dp_solve(vector<int>& coins,vector<int>& dp, int amount)
    {
        if(amount == 0)
        {
            return 0;
        }
        if(amount < 0)
        {
            return -1;
        }
        if(dp[amount] != -1)
        {
            return dp[amount];
        }
        int i,mini = INF;
        for(i = 0;i < coins.size();i++)
        {
            int temp = dp_solve(coins,dp,amount - coins[i]);
            if(temp != -1)
            {
                mini = min(mini,temp + 1);
            }
        }
        return dp[amount] = mini;
    }
void solve()
{
    int n,res = 0;
    cin >> n;
    if(n > 30)
    {
        n = n - 30;
        int temp = n / 15;
        n = n - (temp * 15);
        n = n + 30;
        res+=temp;
    }
    vector<int> coins = {15,10,6,3,1},dp(n + 1, - 1); 
    res+=dp_solve(coins,dp,n);
    cout << res << endl;
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