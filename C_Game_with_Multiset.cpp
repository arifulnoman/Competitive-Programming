#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,sum = 0;
    cin >> n;
    map<ll,ll> m;
    for(i = 0;i < n;i++)
    {
        ll x,y;
        cin >> x >> y;
        if(x == 1)
        {
            ll temp = 1 << y;
            m[temp]++;
            sum+=temp;
        }
        else
        {
            if(sum < y)
            {
                cout << "NO" << '\n';
                continue;
            }
            for (auto rit = m.rbegin(); rit != m.rend(); ++rit)
            {
                if(y == 0)
                {
                    break;
                }
                if(rit -> first > y)
                {
                    continue;
                }
                ll temp = y / rit -> first;
                if(temp <= rit -> second)
                {
                    y = y - (rit -> first * temp);
                }
                else
                {
                    y = y - (rit -> first * rit -> second);
                }
            }
            if(y == 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}