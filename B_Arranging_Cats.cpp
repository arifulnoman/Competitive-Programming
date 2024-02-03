#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,zero = 0,one = 0,ans = 0;
    string s1,s2;
    cin >> n >> s1 >> s2;
    for(i = 0;i < n;i++)
    {
        if(s1[i] == '1' && s2[i] == '0')
        {
            zero++;
        }
        else if(s1[i] == '0' && s2[i] == '1')
        {
            one++;
        }
    }
    if(zero <= one)
    {
        ans+=zero;
    }
    else
    {
        ans+=one;
    }
    ans+=abs(zero - one);
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