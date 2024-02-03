#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,sum = 0;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        sum = sum + v[i];
    }
    ll avg = ceil((double)sum / n);
    if(avg * n != sum)
    {
        cout << "NO" << endl;
        return;
    }
    for(i = 0;i < n;i++)
    {
        ll dif = abs(avg - v[i]);
        if(dif % 2 == 1)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;

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