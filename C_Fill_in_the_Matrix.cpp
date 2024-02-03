#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,m,n,ans = 0;
    cin >> n >> m;
    if(n < m)
    {
        ans = n + 1;
    }
    else
    {
        ans = m;
    }
    if(m == 1)
    {
        ans = 0;
    }
    cout << ans << endl;
    if(ans == 0)
    {
        for(i = 0;i < n;i++)
        {
            cout << 0 << endl;
        }
        return;
    }
    int r_n = ans - 1;
    int count = 0;
    for(i = 0;i < r_n;i++)
    {
        for(j = 0;j < m;j++)
        {
            cout << count % m << " ";
            count++;
        }
        count++;
        cout << endl;
    }
    if(r_n < n)
    {
        n = n - r_n;
        for(i = 0;i < n;i++)
        {
            count = 0;
            for(j = 0;j < m;j++)
            {
                cout << count  << " ";
                count++;
            }
            cout << endl;
        }
    }
}
int main()
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