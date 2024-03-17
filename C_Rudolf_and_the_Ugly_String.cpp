#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,ans = 0;
    string s;
    cin >> n >> s;
    for(i = 0;i < n -2;i++)
    {
        if(s[i] == 'm' || s[i] == 'p')
        {
            string temp;
            int index_delete = 0;
            for(j = i;j < i + 3;j++)
            {
                temp+=s[j];
                if(s[j] == 'p')
                {
                    index_delete = j;
                }
            }
            if(temp == "map" || temp == "pie")
            {
                s[index_delete] = '.';
                ans++;
            }
        }
    }
    cout << ans << '\n';
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