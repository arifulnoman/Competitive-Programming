#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,ans = 0;
    string s;
    cin >> n >> s;
    vector<int> v(26,0);
    for(i = 0;i < n;i++)
    {
        v[s[i] - 65]++;
    }
    for(i = 0;i < 26;i++)
    {
        if(v[i] > i)
        {
            ans++;
        }
    }
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