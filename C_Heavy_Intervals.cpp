#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<ll,char>> v(2 * n);
    vector<int> res;
    vector<ll> cost(n);
    for(i = 0;i < 2 * n;i++)
    {
        cin >> v[i].first;
        if(i < n)
        {
            v[i].second = 'l';
        }
        else
        {
            v[i].second = 'r';
        }
    }
    for(i = 0;i < n;i++)
    {
        cin >> cost[i];
    }
    sort(v.begin(),v.end());
    sort(cost.rbegin(),cost.rend());
    stack<ll> stk;
    for(i = 0;i < 2 * n;i++)
    {
        if(v[i].second == 'l')
        {
            stk.push(v[i].first);
        }
        else
        {
            res.push_back(v[i].first - stk.top());
            stk.pop();
        }
    }
    sort(res.begin(),res.end());
    ll ans = 0;
    for(i = 0;i < n;i++)
    {
        ans+=(res[i] * cost[i]);
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