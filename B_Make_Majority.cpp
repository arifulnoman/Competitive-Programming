#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    vector<int> v;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            if(v.size() == 0 || v.back() == 1)
            {
                v.push_back(s[i] - '0');
            }
            continue;
        }
        v.push_back(1);
    }
    int c0 = 0,c1 = 0;
    for(i = 0;i < v.size();i++)
    {
        if(v[i] == 0)
        {
            c0++;
            continue;
        }
        c1++;
    }
    if(c1 > c0)
    {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
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