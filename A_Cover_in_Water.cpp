#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,count = 0;
    cin >> n;
    string s;
    cin >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '.')
        {
            count++;
        }
    }
    for(i = 0;i < n - 2;i++)
    {
        if(s[i] == '.' && s[i] == s[i + 1] && s[i] == s[i + 2])
        {
            cout << 2 << '\n';
            return;
        }
    }
    cout << count << '\n';
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