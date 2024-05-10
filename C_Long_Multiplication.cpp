#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,flag = 0;
    string x,y;
    cin >> x >> y;
    for(i = 0;i < x.size();i++)
    {
        int a = x[i] - '0',b = y[i] - '0';
        int temp_a = max(a,b),temp_b = min(a,b);
        if(a != b && flag == 0)
        {
            flag = 1;
            x[i] = temp_a + '0';
            y[i] = temp_b + '0';
            continue;
        }
        if(flag == 0)
        {
            x[i] = temp_a + '0';
            y[i] = temp_b + '0';
            continue;
        }
        x[i] = temp_b + '0';
        y[i] = temp_a + '0';
    }
    cout << x << '\n';
    cout << y << '\n';
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