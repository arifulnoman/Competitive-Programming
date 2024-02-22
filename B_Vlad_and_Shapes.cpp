#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<string> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n - 1;i++)
    {
        for(j = 0;j < n - 1;j++)
        {
            if(v[i][j] == '1')
            {
                if(v[i][j] == '1' && v[i][j + 1] == '1' && v[i + 1][j] == '1' && v[i + 1][j + 1] == '1')
                {
                    cout << "SQUARE\n";
                }
                else
                {
                    cout << "TRIANGLE\n";
                }
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