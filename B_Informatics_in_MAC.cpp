#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,mex = 0,mark = 0;
    cin >> n;
    vector<int> v(n);
    vector<pair<int,int>> ans;
    map<int,int> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]] = 1;
    }
    for(auto it : m)
    {
        if(it.first == mex)
        {
            mex++;
            continue;
        }
        break;
    }
    m.clear();
    if(mex == 0)
    {
        cout << 2 << '\n';
        cout << 1 << " " << 1 << '\n';
        cout << 2 << " " << n << '\n';
        return;
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] < mex)
        {
            m[v[i]] = 1;
            if(m.size() == mex)
            {
                ans.push_back({mark + 1,i + 1});
                mark = i + 1;
                m.clear();
                if(ans.size() == 2)
                {
                    break;
                }
            }
        }
    }
    if(ans.size() < 2)
    {
        cout << -1 << '\n';
        return;
    }
    cout << 2 << '\n';
    cout << ans[0].first << " " << ans[0].second << '\n';
    cout << ans[1].first << " " << n << '\n';
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