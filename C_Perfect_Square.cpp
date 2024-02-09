#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,count = 0;
    cin >> n;
    vector<string> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(v[i][j] < v[n - 1 - j][i])
            {
                count+=(v[n - 1 - j][i] - v[i][j]);
                v[i][j] = v[n - 1 - j][i];
            }
            else
            {
                count+=(v[i][j] - v[n - 1 - j][i]);
                v[n - 1 - j][i] = v[i][j];
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(v[i][j] < v[n - 1 - j][i])
            {
                count+=(v[n - 1 - j][i] - v[i][j]);
                v[i][j] = v[n - 1 - j][i];
            }
            else
            {
                count+=(v[i][j] - v[n - 1 - j][i]);
                v[n - 1 - j][i] = v[i][j];
            }
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