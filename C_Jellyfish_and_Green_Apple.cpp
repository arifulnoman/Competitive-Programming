#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll n,m,sum = 0;
    cin >> n >> m;
    ll gcd = __gcd(n,m);
    gcd = m / gcd;
    ll count = 0;
    while(gcd > 0)
    {
        if(gcd & 1)
        {
            count++;
        }
        gcd = gcd >> 1;
    }
    if(count > 1)
    {
        cout << -1 << endl;
        return;
    }
    while(n > 0)
    {
        n = n % m;
        sum = sum + n;
        n = n * 2;
    }
    cout << sum << endl;
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