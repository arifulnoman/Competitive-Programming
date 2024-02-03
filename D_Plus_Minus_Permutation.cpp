#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,x,y;
    cin >> n >> x >> y;
    ll count_x = 0,count_y = 0,common = 0;
    count_x = n / x;
    count_y = n / y;
    ll gcd = __gcd(x,y);
    ll lcm = (x * y) / gcd;
    common = n / lcm;
    count_x = count_x - common;
    count_y = count_y - common;
    ll a = n - count_x + 1;
    ll sum_x = (count_x * ((2 * a) + (count_x - 1))) / 2;
    ll sum_y = (count_y * (count_y + 1)) / 2;
    cout << sum_x - sum_y << endl;
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