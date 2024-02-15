#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    string s = "aaa";
    n-=3;
    i = 2;
    while(n > 0)
    {
        if(s[i] == 'z')
        {
            i--;
        }
        s[i]++;
        n--;
    }
    cout << s << '\n';
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