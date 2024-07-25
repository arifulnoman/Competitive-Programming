#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void bfs(vector<vector<int>>& g,vector<bool>& visited)
{
    queue<int> q;
    q.push(0);
    int i;
    while(!q.empty())
    {
        for(i = 0;i < g[q.front()].size();i++)
        {
            if(!visited[g[q.front()][i]]) q.push(g[q.front()][i]);
        }
        cout << q.front() << " ";
        visited[q.front()] = true;
        q.pop();
    }
}

void solve()
{
    int i,n,e;
    cin >> n >> e;
    vector<vector<int>> g(n);
    vector<bool> visited(n,false);
    for(i = 0;i < e;i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(g,visited);
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