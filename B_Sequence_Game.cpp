#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    vector<int> res;
    res.push_back(v[0]);
    for(i = 1;i < n;i++)
    {
        if(v[i - 1] <= v[i])
        {
            res.push_back(v[i]);
        }
        else
        {
            res.push_back(v[i]);
            res.push_back(v[i]);
        }
    }
    cout << res.size() << endl;
    for(i = 0;i < res.size();i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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