#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,x,maxi = -1,ans = 1;
    cin >> x;
    for(i = 1;i < x;i++)
    {
        int temp = __gcd(x,i) + i;
        if(temp > maxi)
        {
            maxi = temp;
            ans = i;
        }
    }
    cout << ans << '\n';
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