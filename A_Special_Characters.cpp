#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    if(n & 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    char ch = 'A';
    n = (n + 1) / 2;
    for(i = 0;i < n;i++)
    {
        cout << ch << ch;
        ch++;
        if(ch > 'Z')
        {
            ch = 'A';
        }
    }
    cout << '\n';
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