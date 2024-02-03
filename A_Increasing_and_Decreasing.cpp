#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,x,y,n,count = 1;
    cin >> x >> y >> n;
    vector<int> v(n);
    v[n - 1] = y;
    for(i = n - 2;i >= 0;i--)
    {
        v[i] = v[i + 1] - count;
        count++;
    }
    if(v[0] < x)
    {
        cout << -1 << endl;
        return;
    }
    v[0] = x;
    for(i = 0;i < n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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