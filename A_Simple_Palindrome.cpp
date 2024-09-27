#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    cin >> n;
    string ans = "",vowels = "aeiou";
    if(n < 6)
    {
        for(i = 0;i < n;i++)
        {
            ans.push_back(vowels[i]);
        }
        cout << ans << endl;
        return;
    }
    ans = "ae";
    for(i = 0;i < n - 4;i++)
    {
        ans += "i";
    }
    ans += "ou";
    cout << ans << endl;

}

signed main()
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