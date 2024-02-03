#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n < 7)
    {
        cout << "NO" << endl;
        return;
    }
    if(n % 3 == 0 && n < 10)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if(n % 3 == 0)
    {
        cout << 1 << " " << 4 << " " << n - 5 << endl;
        return;
    }
    cout << 1 << " " << 2 << " " << n - 3 << endl;
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