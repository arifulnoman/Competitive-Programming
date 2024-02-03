#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int a,b,c,flag_1 = 0,flag_2 = 0,temp = 0;
    cin >> a >> b >> c;
    if(abs(b - c) % 2 == 1)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << 1 << " ";
    }
    if(abs(a - c) % 2 == 1)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << 1 << " ";
    }
    if(abs(b - a) % 2 == 1)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << 1 << " ";
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