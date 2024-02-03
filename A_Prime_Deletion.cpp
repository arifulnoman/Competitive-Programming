#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char,int> m;
    int i;
    for(i = 0;i < 9;i++)
    {
        m[s[i]] = i;
    }
    if(m['1'] < m['3'])
    {
        cout << 13 << endl;
        return;
    }
    cout << 31 << endl;
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