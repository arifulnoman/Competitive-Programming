#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,q;
    cin >> n;
    vector<int> v(n);
    vector<pair<int,int>> result(n);
    result[0] = {0,0};
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 1;i < n;i++)
    {
        if(v[i] == v[i - 1])
        {
            result[i] = result[i - 1];
        }
        else
        {
            result[i] = {i,i + 1};
        }
    }
    cin >> q;
    for(i = 0;i < q;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x == y)
        {
            cout << -1 << " " << -1 << '\n';
        }
        else
        {
            if(result[y - 1].first >= x && result[y - 1].second <= y)
            {
                cout << result[y - 1].first << " " << result[y - 1].second << '\n';
            }
            else
            {
                cout << -1 << " " << -1 << '\n';
            }
        }
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