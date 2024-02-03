#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
vector<vector<int>> graph;
vector<int> leafs;
void dfs(int root,int par)
{
    bool has_child = false;
    int i;
    for(i = 0;i < graph[root].size();i++)
    {
        if(graph[root][i] == par)
        {
            continue;
        }
        has_child = true;
        dfs(graph[root][i],root);
        leafs[root] = leafs[root] + leafs[graph[root][i]];
    }
    if(!has_child)
    {
        leafs[root] = 1;
    }
}
void solve()
{
    int i,n,q,x,y;
    cin >> n;
    graph.assign(n,vector<int>());
    leafs.assign(n,0);
    for(i = 0;i < n - 1;i++)
    {
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(0,-1);
    cin >> q;
    for(i = 0;i < q;i++)
    {
        cin >> x >> y;
        x--;
        y--;
        cout << (ll)leafs[x] * leafs[y] << '\n';
    }
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