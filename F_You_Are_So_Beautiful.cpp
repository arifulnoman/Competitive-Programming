#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,temp,count = 0;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> m;
    set<ll> st;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for(i = 0;i < n;i++)
    {
        st.insert(v[i]);
        m[v[i]]--;
        if(m[v[i]] == 0)
        {
            count+=st.size();
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