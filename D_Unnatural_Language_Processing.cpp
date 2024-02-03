#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s,res;
    int i,n,count = 0;
    cin >> n >> s;
    for(i = n - 1;i >= 0;i--)
    {
        if(count < 2)
        {
            count++;
            res.push_back(s[i]);
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && count == 2)
            {
                res.push_back('.');
                count = 0;
            }
        }
        else
        {
            res.push_back(s[i]);
            res.push_back('.');
            count = 0;
        }
    }
    for(i = res.size() - 2;i >= 0;i--)
    {
        cout << res[i];
    }
    cout << '\n';
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