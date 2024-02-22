#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,k,sum = 0,count = -1;
    cin >> n >> k;
    int index = k;
    while(sum < k)
    {
        sum+=(n + 1) / 2;
        n/=2;
        if(sum < k)
        {
            index = k - sum;
        }
        count++;
    }
    ll ans = (1 << count) * (2 * index - 1);
    cout << ans << '\n';
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