#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,y,k,x,a;
    cin >> k >> x >> a;
    ll remain = a;
    for(i = 0;i < x;i++)
    {
        y = (a - remain) / (k - 1);
        y++;
        if(y > remain)
        {
            y = remain;
        }
        remain-=y;
        if(remain * k <= a)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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