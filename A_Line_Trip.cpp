#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,x,i;
    cin >> n >> x;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int maxi = v[0];
    for(i = 1;i < n;i++)
    {
        if(v[i] - v[i - 1] > maxi)
        {
            maxi = v[i] - v[i - 1];
        }
    }
    cout << max(maxi,(x - v[n - 1]) * 2) << '\n';
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