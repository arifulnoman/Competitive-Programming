#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,a = 0,b = 0,both_pos = 0,both_neg = 0;
    cin >> n;
    vector<int> x(n),y(n);
    for(i = 0;i < n;i++) cin >> x[i];
    for(i = 0;i < n;i++) cin >> y[i];
    for(i = 0;i < n;i++)
    {
        if(x[i] == y[i])
        {
            if(x[i] > 0)
            {
                both_pos++;
            }
            else if(x[i] < 0)
            {
                both_neg++;
            }
        }
        else
        {
            if(x[i] > 0)
            {
                a++;
            }
            else if(y[i] > 0)
            {
                b++;
            }
        }
    }
    while(both_pos--)
    {
        if(a > b) b++;
        else a++;
    }
    while(both_neg--)
    {
        if(a > b) a--;
        else b--;
    }
    cout << min(a , b) << endl;
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