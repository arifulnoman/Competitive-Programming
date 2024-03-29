#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

vector<string> v;

int match(string s,string p)
{
    int i = 0,j = 0,ans = 0;
    while(i < s.size())
    {
        if(s[i] == p[j])
        {
            i++;
            j++;
            ans++;
            continue;
        }
        i++;
    }
    return s.size() - ans + p.size() - ans;
}

void solve()
{
    int i,n,mini = INF;
    cin >> n;
    string s = to_string(n);
    for(i = 0;i < v.size();i++)
    {
        int temp = match(s,v[i]);
        if(temp < mini)
        {
            mini = temp;
        }
    }
    cout << mini << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    for(i = 1;i < INF;i*=2)
    {
        v.push_back(to_string(i));
    }
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
} 