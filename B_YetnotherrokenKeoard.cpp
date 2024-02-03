#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,flag_1 = 0,flag_2 = 0;
    string s,ans;
    cin >> s;
    for(i = s.size() - 1;i >= 0;i--)
    {
        if(s[i] == 'b')
        {
            flag_1++;
        }
        else if(s[i] == 'B')
        {
            flag_2++;
        }
        else
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                if(flag_2 > 0)
                {
                    flag_2--;
                    continue;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
            else
            {
                if(flag_1 > 0)
                {
                    flag_1--;
                    continue;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
        }
    }
    reverse(ans.begin(),ans.end());
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