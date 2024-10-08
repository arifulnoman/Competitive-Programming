#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,m,maxi = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++) 
    {
        int temp;
        cin >> temp;
        maxi = max(maxi, temp);
    }
    for(i = 0;i < m; i++)
    {
        int l,r;
        char ch;
        cin >> ch >> l >> r;
        if(ch == '+')
        {
            if(l <= maxi && r >= maxi)
            {
                maxi++;
            }
        }
        else
        {
            if(l <= maxi && r >= maxi)
            {
                maxi--;
            }
        }
        cout << maxi << " ";
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