#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,ans = 0,count = 0;
    cin >> n >> k;
    int del = n;
    while(k > 0)
    {
        if(count == 0)
        {
            k -= del;
            count++;
            del--;
            ans++;
        }
        else if(k <= del)
        {
            ans++;
            break;
        }
        else
        {
            k -= 2 * del;
            ans += 2;
            del--;
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