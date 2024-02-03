#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int s,d,k,b = 0,c = 0,p = 0;
    cin >> s >> d >> k;
    b = (2 * s) + (2 * d);
    c = s + (2 * d);
    p = s + (2 * d);
    if(k < b && k <= c && k <= p)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i = 1,t;
    cin >> t;
    while(i <= t)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}