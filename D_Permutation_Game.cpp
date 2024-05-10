#include <bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

int findMax(int n, int k, vector<int> p, vector<int> a, int curr)
{
    int ans = 0;
    int sum = 0;
    vector<bool> visited(n, false);
    while (visited[curr] == false && k > 0)
    {
        visited[curr] = true;
        ans = max(ans, sum + (k * a[curr]));
        sum += a[curr];
        k--;
        curr = p[curr] - 1;
    }
    return ans;
}

void solve()
{
    int i, n, k, pos_b, pos_s, max_b = 0, max_s = 0;
    cin >> n >> k >> pos_b >> pos_s;
    vector<int> v(n), p(n);
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    max_b = findMax(n,k,p,v,pos_b - 1);
    max_s = findMax(n,k,p,v,pos_s - 1);
    if (max_b > max_s)
    {
        cout << "Bodya";
    }
    else if (max_b < max_s)
    {
        cout << "Sasha";
    }
    else
    {
        cout << "Draw";
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}