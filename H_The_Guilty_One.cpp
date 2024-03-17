#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool valid(int x, int y, int h, int w, vector<string>& grid, vector<vector<bool>>& visited)
{
    return x >= 0 && x < h && y >= 0 && y < w && grid[x][y] != '#' && !visited[x][y];
}

int dfs(vector<string>& grid, vector<vector<bool>>& visited, int x, int y)
{
    visited[x][y] = true;
    int k,count = 1;
    for (k = 0; k < 4; k++) {
        int nx = x + dx[k], ny = y + dy[k];
        if (valid(nx, ny, grid.size(), grid[0].size(), grid, visited)) {
            count += dfs(grid, visited, nx, ny);
        }
    }
    return count;
}

void solve(int t)
{
    int i,w,h;
    cin >> w >> h;
    vector<string> grid(h);
    for (i = 0; i < h; i++)
    {
        cin >> grid[i];
    }
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    int ans = 0;
    for (i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (grid[i][j] == '@' && !visited[i][j])
            {
                ans = max(ans, dfs(grid, visited, i, j));
            }
        }
    }
    cout << "Case " << t << ": " << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    cin >> t;
    for(i = 1;i <= t;i++)
    {
        solve(i);
    }
    return 0;
}
