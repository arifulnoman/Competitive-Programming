#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,a,b,r,flag = 0,ans = 0;
    cin >> a >> b >> r;
    if(a < b)
    {
        swap(a,b);
    }
    for(i = 62;i >= 0;i--)
    {
        if(((a >> i) & 1) && !((b >> i) & 1))
        {
            if(flag == 0)
            {
                flag = 1;
            }
            else
            {
                if((ans | (1ll << i)) <= r)
                {
                    ans|= (1ll << i);   
                }
            }
        }
    }
    cout << ((a ^ ans) - (b ^ ans)) << '\n';
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