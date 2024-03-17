#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll a,b,l,i,j,x = 0,y = 0;
    cin >> a >> b >> l;
    set<int> s;
    for(i = a;i <= l;i = i * a)
    {
        x++;
    }
    for(i = b;i <= l;i = i * b)
    {
        y++;
    }
    for(i = 0;i <= x;i++)
    {
        for(j = 0;j <= y;j++)
        {
            ll temp = ceil(pow(a,i)) * ceil(pow(b,j));
            if(temp <= l)
            {
                if(l % temp == 0)
                {
                    s.insert(l / temp);
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << s.size() << '\n';
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