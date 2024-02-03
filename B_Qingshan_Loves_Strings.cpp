#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m,flag_s = 0,flag_t = 0;
    string s,t;
    char temp;
    cin >> n >> m >> s >> t;
    for(i = 0;i < n - 1;i++)
    {
        if(s[i] == s[i + 1])
        {
            if(flag_s == 0)
            {
                temp = s[i];
                flag_s = 1;
            }
            else
            {
                if(temp != s[i])
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    if(flag_s == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    if(t[0] != t[m - 1] || temp == t[0])
    {
        cout << "No" << endl;
        return;
    }
    for(i = 0;i < m - 1;i++)
    {
        if(t[i] == t[i + 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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