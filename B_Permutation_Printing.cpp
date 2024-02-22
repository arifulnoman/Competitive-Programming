#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,odd = 1;
    cin >> n;
    int even = n;
    if(even & 1)
    {
        even--;
    }
    for(i = 0;i < (n + 1) / 2;i++)
    {
        if(odd <= n)
        {
            cout << odd << " ";
            odd+=2;
        }
        if(even >= 2)
        {
            cout << even << " ";
            even-=2;
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