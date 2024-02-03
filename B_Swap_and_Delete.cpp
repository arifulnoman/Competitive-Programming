#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,one = 0,zero = 0;
    string s;
    cin >> s;
    int n = s.size();
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            if(one == 0)
            {
                cout << n - i << '\n';
                return;
            }
            else
            {
                one--;
            }
        }
        else
        {
            if(zero == 0)
            {
                cout << n - i << '\n';
                return;
            }
            else
            {
                zero--;
            }
        }
    }
    cout << 0 << '\n';
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