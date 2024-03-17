#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n),temp;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int maxi = 100;
    for(i = n - 1;i >= 0;i--)
    {
        if(maxi >= v[i])
        {
            maxi = v[i];
            continue;
        }
        if(v[i] < 10)
        {
            cout << "NO\n";
            return;
        }
        int x = v[i] / 10;
        int y = v[i] % 10;
        if(x > y || y > maxi || x > maxi)
        {
            cout << "NO\n";
            return;
        }
        maxi = x;
    }
    cout << "YES\n";
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