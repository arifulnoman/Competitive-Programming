#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
typedef __gnu_pbds::tree<ll, __gnu_pbds::null_type, less<ll>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
void solve()
{
    ll i,j,n,count = 0;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    ordered_set st;
    for(i = 0;i < n;i++)
    {
        count = count + st.size() - st.order_of_key(v[i].second);
        st.insert(v[i].second);
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