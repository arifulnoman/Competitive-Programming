#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<int> v(n + 1,0);
    vector<int> res;
    for(i = 1;i <= n;i++)
    {
        if(v[i] == 0)
        {
            res.push_back(i);
            v[i] = 1;
            for(j = i;j <= n/2;j = j * 2)
            {
                res.push_back(j * 2);
                v[j * 2] = 1;
            }
        }
    }
    for(i = 1;i <= n;i++)
    {
        if(v[i] == 0)
        {
            res.push_back(i);
        }
    }
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