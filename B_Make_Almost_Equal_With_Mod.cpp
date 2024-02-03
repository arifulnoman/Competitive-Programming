#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,j,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 1; ;i++)
    {
        set<ll> st;
        ll x = pow(2,i);
        for(j = 0;j < n;j++)
        {
            st.insert(v[j] % x);
        }
        if(st.size() == 2)
        {
            cout << x << '\n';
            return;
        }
    }
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