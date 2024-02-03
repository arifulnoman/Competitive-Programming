#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,m;
    cin >> n >> m;
    vector<ll> v(n),temp(m);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < m;i++)
    {
        cin >> temp[i];
    }
    sort(v.begin(),v.end());
    sort(temp.begin(),temp.end());
    ll ans = 0,start = 0,end = n - 1,s = 0,e = m - 1;
    while(start <= end)
    {
        if(abs(v[start] - temp[s]) > abs(v[start] - temp[e]))
        {
            if(abs(v[end] - temp[s]) > abs(v[end] - temp[e]))
            {
                if(abs(v[end] - temp[s]) > abs(v[start] - temp[s]))
                {
                    ans+=abs(v[end] - temp[s]);
                    end--;
                    s++;
                }
                else
                {
                    ans+=abs(v[start] - temp[s]);
                    s++;
                    start++;
                }
            }
            else
            {
                if(abs(v[start] - temp[s]) > abs(v[end] - temp[e]))
                {
                    ans+=abs(v[start] - temp[s]);
                    start++;
                    s++;
                }
                else
                {
                    ans+=abs(v[end] - temp[e]);
                    end--;
                    e--;
                }
            }
        }
        else
        {
            if(abs(v[end] - temp[s]) > abs(v[end] - temp[e]))
            {
                if(abs(v[start] - temp[e]) > abs(v[end] - temp[s]))
                {
                    ans+=abs(v[start] - temp[e]);
                    start++;
                    e--;
                }
                else
                {
                    ans+=abs(v[end] - temp[s]);
                    s++;
                    end--;
                }
            }
            else
            {
                if(abs(v[start] - temp[e]) > abs(v[end] - temp[e]))
                {
                    ans+=abs(v[start] - temp[e]);
                    start++;
                    e--;
                }
                else
                {
                    ans+=abs(v[end] - temp[e]);
                    end--;
                    e--;
                }
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