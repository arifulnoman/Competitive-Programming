#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,sumOf2 = 0,sumOf3 = 0; cin >> n;
    for(i = 2;i <= n;i+=2)
    {
        sumOf2 += i;
    }
    for(i = 3;i <= n;i+=3)
    {
        sumOf3 += i;
    }
    if(sumOf2 > sumOf3)
    {
        cout << 2 << '\n';
        return;
    }
    cout << 3 << '\n';
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