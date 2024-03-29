#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;
vector<int> v;

void solve()
{
    int i,n;
    cin >> n;
    for(i = v.size() - 1;i > 0;i--)
    {
        if(n == 1)
        {
            cout << "YES\n";
            return;
        }
        if(v[i] <= n && n % v[i] == 0)
        {
            n/=v[i];
            i++;
        }
    }
    cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    for (i = 1; i <= 32; ++i)
    {
        int binaryValue = 0;
        int bit = 1;
        int num = i;
        while(num > 0)
        {
            binaryValue += (num % 2) * bit;
            num /= 2;
            bit *= 10;
        }
        v.push_back(binaryValue);
    }
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}