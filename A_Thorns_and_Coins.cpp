#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,coin = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '@')
        {
            coin++;
        }
        if(s[i] == '*')
        {
            if(i + 1 < n)
            {
                if(s[i + 1] == '*')
                {
                    break;
                }
            }
        }
    }
    cout << coin << '\n';
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
