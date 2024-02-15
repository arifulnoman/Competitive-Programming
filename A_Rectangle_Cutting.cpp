#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int a,b;
    cin >> a >> b;
    int x = a,y = b;
    if(a % 2 == 0)
    {
        if(a / 2 != y && b * 2 != x)
        {
            cout << "Yes\n";
            return;
        }
    }
    if(b % 2 == 0)
    {
        if(b / 2 != x && a * 2 != y)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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