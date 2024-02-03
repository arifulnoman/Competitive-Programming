#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,k,x,sum = 0;
    cin >> n >> k >> x;
    if(k > x + 1 || k > n)
    {
        cout << -1 << endl;
        return;
    }
    sum = ((k - 1) * k) / 2;
    n = n - k;
    if(n <= 0)
    {
        cout << sum << endl;
        return;
    }
    if(k == x)
    {
        sum = sum + n * (x - 1);
    }
    else
    {
        sum = sum + n * x;
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