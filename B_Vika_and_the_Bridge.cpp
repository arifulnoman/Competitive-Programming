#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n),max_dis(k + 1,0),second_max_dis(k + 1,0),last_pos(k + 1,-1);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        if(last_pos[v[i]] == -1)
        {
            max_dis[v[i]] = i;
        }
        else
        {
            int dis = i - last_pos[v[i]] - 1;
            if(dis > max_dis[v[i]])
            {
                second_max_dis[v[i]] = max_dis[v[i]];
                max_dis[v[i]] = dis;
            }
            else if(dis == max_dis[v[i]])
            {
                second_max_dis[v[i]] = dis;
            }
            else
            {
                if(dis > second_max_dis[v[i]])
                {
                    second_max_dis[v[i]] = dis;
                }
            }
        }
        last_pos[v[i]] = i;
    }
    for(i = 1;i < k + 1;i++)
    {
        int dis = n - 1 - last_pos[i];
        if(dis > max_dis[i])
        {
            second_max_dis[i] = max_dis[i];
            max_dis[i] = dis;
        }
        else if(dis == max_dis[i])
        {
            second_max_dis[i] = dis;
        }
        else
        {
            if(dis > second_max_dis[i])
            {
                second_max_dis[i] = dis;
            }
        }
    }
    for(i = 1;i < k + 1;i++)
    {
        max_dis[i] = max_dis[i] / 2;
    }
    int mini = INF;
    for(i = 1;i < k + 1;i++)
    {
        mini = min(mini,max(max_dis[i],second_max_dis[i]));
    }
    cout << mini << endl;
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