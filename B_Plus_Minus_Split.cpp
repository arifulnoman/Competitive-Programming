#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,ans = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    if(ans >= 0)
    {
        cout << ans << '\n';
        return;
    }
    cout << -ans << endl;
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