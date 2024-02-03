#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll n,p,l,t;
    cin >> n >> p >> l >> t;
    ll tasks = ceil((double)n / 7);
    ll days = ceil((double)tasks / 2);
    ll cost = (tasks * t) + (days * l);
    if(cost > p)
    {
        ll temp = (t * 2) + l;
        days = ceil((double)p / temp);
    }
    else
    {
        p = p - cost;
        days = days + ceil((double)p / l);
    }
    cout << n - days << '\n';
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