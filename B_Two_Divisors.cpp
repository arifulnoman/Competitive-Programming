#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll a,b;
    cin >> a >> b;
    ll gcd = __gcd(a,b);
    ll lcm = (a * b) / gcd;
    if(lcm == b)
    {
        cout << (b * lcm) / a << '\n';
        return;
    }
    cout << lcm << '\n';
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