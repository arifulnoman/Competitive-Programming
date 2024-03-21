#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,a,b,c;
    cin >> a >> b >> c;
    if(b % 3 == 0)
    {
        cout << a + (b / 3) + (c + 2) / 3 << '\n';
        return;
    }
    int temp = b / 3;
    temp++;
    c-=(temp * 3 - b);
    b = temp * 3;
    if(c < 0)
    {
        cout << -1 << '\n';
        return;
    }
    cout << a + (b / 3) + (c + 2) / 3 << '\n';
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