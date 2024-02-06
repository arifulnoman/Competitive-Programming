#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m,k;
    cin >> n >> m >> k;
    vector<int> v1(n),v2(m),v(k);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i];
        if(v1[i] <= k)
        {
            v[v1[i] - 1] = 1;
        }
    }
    for(i = 0;i < m;i++)
    {
        cin >> v2[i];
        if(v2[i] <= k)
        {
            if(v[v2[i] - 1] == 1)
            {
                v[v2[i] - 1] = 3;
            }
            else if(v[v2[i] - 1] == 0)
            {
                v[v2[i] - 1] = 2;
            }
        }
    }
    int one = 0,two = 0;
    for(i = 0;i < k;i++)
    {
        if(v[i] == 0)
        {
            cout << "NO\n";
            return;
        }
        if(v[i] == 1)
        {
            one++;
            continue;
        }
        if(v[i] == 2)
        {
            two++;
            continue;
        }
    }
    if(one > k / 2 || two > k / 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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