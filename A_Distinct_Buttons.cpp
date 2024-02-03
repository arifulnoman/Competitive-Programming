#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,left_plus = 0,left_minus = 0,right_plus = 0,right_minus = 0;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        int u,v;
        cin >> u >> v;
        if(u < 0)
        {
            left_minus = 1;
        }
        if(u > 0)
        {
            left_plus = 1;
        }
        if(v < 0)
        {
            right_minus = 1;
        }
        if(v > 0)
        {
            right_plus = 1;
        }
    }
    if(left_minus == 1 && left_plus == 1 && right_minus == 1 && right_plus == 1)
    {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
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