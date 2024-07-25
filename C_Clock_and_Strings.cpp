#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,a,b,c,d,count = 0;
    cin >> a >> b >> c >> d;
    if(a > b)
    {
        swap(a,b);
    }
    for(i = a + 1;i < b;i++)
    {
        if(i == c || i == d)
        {
            count++;
        }
    }
    if(count == 2 || count == 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n"; 
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