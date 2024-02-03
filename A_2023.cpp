#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,k,res = 1;
    cin >> n >> k;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        res = res * v[i];
    }
    if(2023 % res != 0)
    {
        cout <<  "NO\n";
        return;
    }
    cout << "YES\n";
    cout << 2023 / res;
    for(i = 1;i < k;i++)
    {
        cout << " " << 1;
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