#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,j,n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll mini = v[0];
    ll min_dis = 1e18;
    for(i = 0;i < n - 1;i++)
    {
        if(v[i + 1] - v[i] < min_dis)
        {
            min_dis = v[i + 1] - v[i];
        }
    }
    mini = min(mini,min_dis);
    if(k >= 3)
    {
        cout << 0;
    }
    else if(k == 1)
    {
        cout << mini;
    }
    else
    {
        for(i = 0;i < n - 1;i++)
        {
            for(j = i + 1;j < n;j++)
            {
                ll temp = v[j] - v[i],start = 0,end = n - 1;
                while(start <= end)
                {
                    ll mid = start + (end - start) / 2;
                    if(v[mid] <= temp)
                    {
                        mini = min(mini,temp - v[mid]);
                        start = mid + 1;
                    }
                    else
                    {
                        mini = min(mini,v[mid] - temp);
                        end = mid - 1;
                    }
                }
            }
        }
        cout << mini;
    }
    cout << '\n';
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