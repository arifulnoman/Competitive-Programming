#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<string> v(2);
    for(i = 0;i < 2;i++)
    {
        cin >> v[i];
    }
    i = 0,j = 0;
    while (true)
    {
        if((i == 1 && j == n - 2) || (i == 0 && j == n - 1) || (i == 1 && j == n - 1))
        {
            cout << "YES\n";
            return;
        }
        if(i == 0)
        {
            if(v[i][j + 1] == '<' && v[i + 1][j] == '<')
            {
                cout << "NO\n";
                return;
            }
            if(v[i][j + 1] == '>')
            {
                j+=2;
                continue;
            }
            i++;
            j++;
        }
        else
        {
            if(v[i][j + 1] == '<' && v[i - 1][j] == '<')
            {
                cout << "NO\n";
                return;
            }
            if(v[i][j + 1] == '>')
            {
                j+=2;
                continue;
            }
            i--;
            j++;
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