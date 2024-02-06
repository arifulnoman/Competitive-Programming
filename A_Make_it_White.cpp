#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0,first = 0,last = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        if(flag == 0 && s[i] == 'B')
        {
            flag = 1;
            first = i;
        }
        if(s[i] == 'B')
        {
            last = i;
        }
    }
    cout << last - first + 1 << '\n';
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