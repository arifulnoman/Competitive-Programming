#include <bits/stdc++.h>
using namespace std;
#define dbg(a) cout << #a << " = " << a << endl

typedef long long ll;

const int MAX = 4e5 + 5;

int n;
string s;
int adj[MAX][2];

int dfs(int u) {
    if (adj[u][0] == 0 && adj[u][1] == 0) {
        return 0;
    }
    int ans = 1e9;

    if (adj[u][0] != 0)
        ans = min(ans, dfs(adj[u][0]) + (s[u] != 'L'));
    if (adj[u][1] != 0)
        ans = min(ans, dfs(adj[u][1]) + (s[u] != 'R'));

    return ans;
}

void solve() {
    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= n; i++) {
        cin >> adj[i][0];
        cin >> adj[i][1];
    }
    cout << dfs(1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
