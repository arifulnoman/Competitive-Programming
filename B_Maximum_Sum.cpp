#include<bits/stdc++.h>
#define int long long
const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;
using namespace std;
#define dbg(a) cout << #a << " = " << a << endl

void solve()
{
    int i,n,k,ans = 0,sum = 0,total = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        total+=v[i];
        sum+=v[i];
        if(sum < 0)
        {
            sum = 0;
        }
        ans = max(ans,sum);
    }
    total-=ans;
    while(k > 0)
    {
        ans*=2;
        ans%=MOD;
        k--;
    }
    cout << (((ans + total) % MOD) + MOD) % MOD << '\n';
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