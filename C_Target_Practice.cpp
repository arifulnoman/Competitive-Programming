#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j;
    vector<string> v(10);
    for(i = 0;i < 10;i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for(i = 0;i < 10;i++)
    {
        for(j = 0;j < 10;j++)
        {
            if(v[i][j] == 'X')
            {
                if(i == 0 || j == 0 || i == 9 || j == 9)
                {
                    count++;
                }
                else if(i == 1 || j == 1 || i == 8 || j == 8)
                {
                    count = count + 2;
                }
                else if(i == 2 || j == 2 || i == 7 || j == 7)
                {
                    count = count + 3;
                }
                else if(i == 3 || j == 3 || i == 6 || j == 6)
                {
                    count = count + 4;
                }
                else
                {
                    count = count + 5;
                }
            }
        }
    }
    cout << count << endl;
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