#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,x;
    cin >> x >> n;
    int ans = x;
    for(i = 1;i * i <= x;i++)
    {
        if(x % i) continue;
        if(i >= n)
        {
            ans = min(ans,i);
        }
        if(x / i >= n)
        {
            ans = min(ans,x / i);
        }
    }
    cout << x / ans << '\n';
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