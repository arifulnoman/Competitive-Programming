#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i;
    string s;
    cin >> s;
    for(i = 1;i <= 8;i++)
    {
        if(i != s[1] - '0')
        {
            cout << s[0] << i << '\n';
        }
    }
    char ch = 'a';
    for(i = 0;i < 8;i++)
    {
        if(ch != s[0])
        {
            cout << ch << s[1] << '\n';
        }
        ch++;
    }
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