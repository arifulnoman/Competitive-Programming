#include<bits/stdc++.h>
#define ll long long
const ll INF = 1e18;
using namespace std;
void solve()
{
    int i,n,k,a,b;
    cin >> n >> k >> a >> b;
    vector<pair<ll,ll>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    if(a <= k && b <= k)
    {
        cout << 0 << endl;
        return;
    }
    ll mini = abs(v[a - 1].first - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second);
    ll temp = 0,temp_1 = 0,temp_mini = INF,temp_1_mini = INF;
    for(i = 0;i < k;i++)
    {
        if(a <= k)
        {
            temp = 0;
        }
        else
        {
            temp = abs(v[a - 1].first - v[i].first) + abs(v[a - 1].second - v[i].second);
        }
        if(temp < temp_mini)
        {
            temp_mini = temp;
        }
        if(b <= k)
        {
            temp_1 = 0;
        }
        else
        {
            temp_1 = abs(v[b - 1].first - v[i].first) + abs(v[b - 1].second - v[i].second);
        }
        if(temp_1 < temp_1_mini)
        {
            temp_1_mini = temp_1;
        }
    }
    ll sum = temp_1_mini + temp_mini;
    if(sum < mini)
    {
        mini = sum;
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