#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,j,n,flag = 0,x = 0;
    cin >> n;
    string s1 = "##",s2 = "..";
    for(i = 0;i < n;i++)
    {
        string temp;
        flag = x;
        for(j = 0;j < n;j++)
        {
            if(flag == 0)
            {
                temp+=s1;
                flag = 1;
            }
            else
            {
                temp+=s2;
                flag = 0;          
            }
        }
        cout << temp << '\n';
        cout << temp << '\n';
        x = !x;
    }
}

signed main()
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