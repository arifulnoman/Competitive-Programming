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
    for(i = 0;i < n / 2;i++)
    {
        if(s[i] != s[n - 1 - i])
        {
            count++;
        }
    }
    vector<int> ans(n + 1,0);
    int x = 0;
    if(n & 1)
    {
        x = 1;
    }
    else
    {
        x = 2;
    }
    for(i = count; i <= n - count;i = i + x)
    {
        ans[i] = 1;
    }
    for(i = 0;i <= n;i++)
    {
        cout << ans[i];
    }
    cout << endl;
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