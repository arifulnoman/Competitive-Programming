#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> v1(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(),v.end());
    for(i = 0;i < n;i++)
    {
        cout << v[i].first << " ";
    }
    cout << '\n';
    for(i = 0;i < n;i++)
    {
        cout << v1[v[i].second] << " ";
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