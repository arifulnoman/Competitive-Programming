#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll mini = v[0],maxi = v[n - 1];
    ll dif = maxi - mini;
    vector<int> ans;
    while(dif > 0)
    {
        ll temp_1 = maxi / 2 - mini / 2;
        ll temp_2 = ((maxi + 1) / 2) - ((mini + 1) / 2);
        if(temp_1 > temp_2)
        {
            maxi = (maxi + 1) / 2;
            mini = (mini + 1) / 2;
            ans.push_back(1);
        }
        else
        {
            maxi = maxi / 2;
            mini = mini / 2;
            ans.push_back(0);
        }
        dif = maxi - mini;
    }
    cout << ans.size() << '\n';
    if(ans.size() > n || ans.size() == 0)
    {
        return;
    }
    for(i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
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