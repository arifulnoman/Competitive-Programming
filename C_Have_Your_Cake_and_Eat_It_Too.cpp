#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,k,n,total = 0;
    cin >> n;
    vector<vector<int>> v(3,vector<int>(n));
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < n;j++)
        {
            cin >> v[i][j];
            if(i == 0) total += v[i][j];
        }
    }
    total += 2;
    total /= 3;
    for(i = 0;i < 3;i++)
    {
        int temp,sum = 0,flag = 0,prev_1 = 0,prev_2 = 0,prev_3 = 0;
        vector<int> ans(6);
        temp = prev_1;
        while(temp < n)
        {
            sum += v[i][temp];
            if(sum >= total)
            {
                flag = 1;
                ans[2 * i] = 1;
                ans[2 * i + 1] = temp + 1;
                prev_2 = temp;
                break;
            }
            temp++;
        }
        if(flag == 0) continue;
        for(j = 0;j < 3;j++)
        {
            if(i == j) continue;
            sum = 0,flag = 0;
            temp = prev_2;
            temp++;
            ans[2 * j] = temp + 1;
            while(temp < n)
            {
                sum += v[j][temp];
                if(sum >= total)
                {
                    flag = 1;
                    ans[2 * j + 1] = temp + 1;
                    prev_3 = temp;
                    break;
                }
                temp++;
            }
            if(flag == 0) continue;
            for(k = 0;k < 3;k++)
            {
                if(j == k || i == k) continue;
                sum = 0;
                temp = prev_3;
                temp++;
                ans[2 * k] = temp + 1;
                while(temp < n)
                {
                    sum += v[k][temp];
                    if(sum >= total)
                    {
                        ans[2 * k + 1] = n;
                        for(int x = 0;x < 6;x++) cout << ans[x] << " ";
                        cout << '\n';
                        return;
                    }
                    temp++;
                }
            }
        }
    }
    cout << -1 << '\n';
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