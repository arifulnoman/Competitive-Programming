#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(),v.end());
    if(v[0].first == v[1].first)
    {
        cout << "Still Rozdil" << endl;
        return;
    }
    cout << v[0].second << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}