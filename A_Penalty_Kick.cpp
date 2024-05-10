#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        if(i % 3 == 0)
        {
            cout << "x";
            continue;
        }
        cout << "o";
    }
    cout <<'\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}