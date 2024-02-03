#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,m;
    cin >> n >> m;
    vector<vector<char>> v(n);
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            char temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    string s = "vika";
    int count = 0;
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(s[count] == v[j][i])
            {
                count++;
                break;
            }
        }
    }
    if(count == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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