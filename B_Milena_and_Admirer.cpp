#include<bits/stdc++.h>
#define ll long long
const ll INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    ll mini = INF,count = 0;
    for(i = n - 1;i >= 0;i--)
    {
        if(v[i] < mini)
        {
            mini = v[i];
        }
        else
        {
            int temp = (v[i] - 1) / mini;
            count = count + temp;
            mini = v[i] / (temp + 1);
        }
    }
    cout << count << '\n';
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