#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

vector<vector<int>> g;
vector<int> dis;
map<pair<int,int>,int> mp;

void dfs(int root,int par)
{
    int i;
    for(i = 0;i < g[root].size();i++)
    {
        if(g[root][i] == par)
        {
            continue;
        }
        if(root == 0)
        {
            dis[g[root][i]] = 1;
        }
        else
        {
            if(mp[{root,par}] > mp[{root,g[root][i]}])
            {
                dis[g[root][i]] = dis[root] + 1;    
            }
            else
            {
                dis[g[root][i]] = dis[root];
            }
        }
        dfs(g[root][i],root);
    }
}

void solve()
{
    int i,n;
    cin >> n;
    g.resize(n);
    dis.resize(n);
    for(i = 0;i < n - 1;i++)
    {
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        mp[{u,v}] = i;
        mp[{v,u}] = i;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0,-1);
    cout << *max_element(dis.begin(),dis.end()) << '\n';
    g.clear();
    mp.clear();
    dis.clear();
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