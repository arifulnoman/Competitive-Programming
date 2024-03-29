#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

bool check(string s1,string s,int length)
{
    int i,j,count = 0;
    for(i = 0;i <= s.size() - length;i+=length)
    {
        for(j = 0;j < length;j++)
        {
            if(s[i + j] != s1[j])
            {
                count++;
            }
        }
    }
    if(count < 2)
    {
        return true;
    }
    s1 = s.substr(s.size() - length,length);
    count = 0;
    for(i = 0;i <= s.size() - length;i+=length)
    {
        for(j = 0;j < length;j++)
        {
            if(s[i + j] != s1[j])
            {
                count++;
            }
        }
    }
    if(count < 2)
    {
        return true;
    }
    return false;
}

void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    for(i = 1;i * i <= n;i++)
    {
        if(n % i == 0)
        {
            bool res = check(s.substr(0,i),s,i);
            if(res == true)
            {
                cout << i << '\n';
                return;
            }
        }
    }
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