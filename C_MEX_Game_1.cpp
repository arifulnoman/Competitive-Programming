#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,ans = 0,flag = 0;
    cin >> n;
    unordered_map<int,int> mp;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    for(i = 0;i <= n;i++)
    {
        if(mp[i] > 1)
        {
            continue;
        }
        else
        {
            if(mp[i] == 0)
            {
                ans = i;
                break;
            }
            else
            {
                if(flag == 1)
                {
                    ans = i;
                    break;
                }
                flag = 1;
            }
        }
    }
    cout << ans << '\n';
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