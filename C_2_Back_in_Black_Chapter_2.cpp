#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,q,ans = 0;
    string s,s1;
    cin >> n >> s1 >> q;
    while(q > 0)
    {
        int i,x,sum = 0;
        cin >> x;
        s = s1;
        for(i = 0;i < n;i++)
        {
            if((i + 1) % x == 0)
            {
                if(s[i] == '0')
                {
                    s[i] = '1';
                }
                else
                {
                    s[i] = '0';
                }
            }
        }
        s1 = s;
        for(i = 0;i < n;i++)
        {
            if(s[i] == '1')
            {
                sum++;
                int dif = i - 0 + 1;
                for(int j = i;j < n;j = j + dif)
                {
                    if(s[j] == '0')
                    {
                        s[j] = '1';
                    }
                    else
                    {
                        s[j] = '0';
                    }
                }
            }
        }
        ans = ans + sum;
        q--;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i = 1,t;
    cin >> t;
    while(i <= t)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}