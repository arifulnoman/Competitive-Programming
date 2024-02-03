#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<ll,ll>> v(n),ans;
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    ll temp = v[0].first,count = 0;
    for(i = 1;i < n;i++)
    {
        if(temp >= v[i].first)
        {
            temp+=v[i].first;
            count++;
        }
        else
        {
            while(count >= 0)
            {
                ans.push_back({temp,0});
                count--;
            }
            temp+=v[i].first;
            count = 0;
        }
    }
    while(count >= 0)
    {
        ans.push_back({temp,0});
        count--;
    }
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        if(m[ans[i].first] < i)
        {
            m[ans[i].first] = i;
        }
    }
    for(i = 0;i < n;i++)
    {
        v[i].first = m[ans[i].first];
    }
    sort(v.begin(),v.end(),[](pair<ll,ll>& a,pair<ll,ll>& b)
    {
        return a.second < b.second;
    });
    for(i = 0;i < n;i++)
    {
        cout << v[i].first << " ";
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