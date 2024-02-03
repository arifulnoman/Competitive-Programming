#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll n,k,x;
    cin >> n >> k >> x;
    ll min_sum = (k * (k + 1)) / 2;
    ll a = n - k + 1;
    ll max_sum = (k * ((2 * a) + (k - 1))) / 2;
    if(min_sum <= x && x <= max_sum)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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