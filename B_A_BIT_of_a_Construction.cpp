#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,number = 0;
    cin >> n >> k;
    if(n == 1)
    {
        cout << k << '\n';
        return;
    }
    for(i = 2;i <= k;i = i * 2)
    {
        if(i - 1 <= k)
        {
            number = i - 1;
        }
    }
    for(i = 0;i < n;i++)
    {
        cout << number << " ";
        k-=number;
        number = k;
        if(k < 0)
        {
            number = 0;
        }
    }
    cout << '\n';
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