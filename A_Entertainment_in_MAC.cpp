#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,x = 0;
    string s;
    cin >> n >> s;
    while(s[x] == s[s.size() - 1 - x] && x < s.size() / 2)
    {
        x++;
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