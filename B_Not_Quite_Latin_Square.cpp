#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,k;
    vector<string> v(3);
    for(i = 0;i < 3;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(v[i][j] == '?')
            {
                int e = 0;
                e = 'A' + 'B' + 'C';
                for(k = 0;k < 3;k++)
                {
                    if(v[i][k] != '?')
                    {
                        e-=v[i][k];
                    }
                }
                char ch = e;
                cout << ch << '\n';
                return;
            }
        }
    }
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