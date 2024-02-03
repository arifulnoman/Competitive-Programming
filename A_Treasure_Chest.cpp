#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int x,y,k;
    cin >> x >> y >> k;
    if(y <= x)
    {
        cout << x << '\n';
    }
    else
    {
        int temp = min(y - x,k);
        cout << x + temp + (y - (temp + x)) * 2 << '\n';
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