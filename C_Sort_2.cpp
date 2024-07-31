#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,q;
    cin >> n >> q;
    string a,b;
    cin >> a >> b;
    vector<vector<int>> letters_a(26,vector<int>(n + 1)),letters_b(26,vector<int>(n + 1));
    // letters_a[a[0] - 97][0] = 1;
    // letters_b[b[0] - 97][0] = 1;
    for(i = 1;i < n + 1;i++)
    {
        for(j = 0;j < 26;j++)
        {
            if(j == a[i - 1] - 97)
            {
                letters_a[j][i] = letters_a[j][i - 1] + 1;
                continue;
            }
            letters_a[j][i] = letters_a[j][i - 1];
        }
    }
    for(i = 1;i < n + 1;i++)
    {
        for(j = 0;j < 26;j++)
        {
            if(j == b[i - 1] - 97)
            {
                letters_b[j][i] = letters_b[j][i - 1] + 1;
                continue;
            }
            letters_b[j][i] = letters_b[j][i - 1];
        }
    }
    for(i = 0;i < q;i++)
    {
        int l, r, ans = 0;
        cin >> l >> r;
        for(j = 0;j < 26;j++)
        {
            if(letters_a[j][r] - letters_a[j][l - 1] > 0)
            {
                int total_a = 0,total_b = 0;
                total_a = letters_a[j][r] - letters_a[j][l - 1];
                total_b = letters_b[j][r] - letters_b[j][l - 1];
                if(total_a > total_b)
                {
                    ans += total_a - total_b;
                }
            }
        }
        cout << ans << "\n";
    }
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