#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0,zero = 0,one = 0;
    string s;
    cin >> n >> s;
    if(s[0] == '1')
    {
        one++;
    }
    else
    {
        zero++;
    }
    for(i = 1;i < n;i++)
    {
        if(s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
        if(s[i] != s[i - 1])
        {
            flag = 1;
        }
    }
    if(flag == 1 || zero > one)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
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