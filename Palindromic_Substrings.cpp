#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m,no_1 = 0,no_0 = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            no_0++;
            continue;
        }
        no_1++;
    }
    if(n & 1)
    {
        if((no_0 + 1 == no_1 || no_1 + 1 == no_0) && n > 1)
        {
            cout << "Alice\n";
            return;
        }
        cout << "Bob\n";
        return;
    }
    if(no_0 == no_1)
    {
        cout << "Bob\n";
        return;
    }
    cout << "Alice\n";
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