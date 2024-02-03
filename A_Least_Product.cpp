#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,neg = 0,zero = 1;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(v[i] == 0)
        {
            zero = 0;
        }
        if(v[i] < 0)
        {
            neg++;
        }
    }
    if(zero == 0 || (neg & 1))
    {
        cout << 0 << '\n';
        return;
    }
    cout << 1 << '\n';
    cout << 1 << " " << 0 << '\n';
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