#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    if(k <= (n + (n - 2)) * 2)
    {
        cout << (k + 1) / 2 << '\n';
        return;
    }
    cout << n + (n - 2) + (k - (n + (n - 2)) * 2) << '\n';
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