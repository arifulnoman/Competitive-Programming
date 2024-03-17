#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll n,x,i,s=0,a;
    cin >> n >> x;
    char ch;
    for(i = 0;i < n;i++)
    {
        cin >> ch >> a;
        if(ch == '+')
        {
            x+=a;
        }
        else
        {
            if(x-a<0)
            {
                s++;
            }
            else
            {
                x-=a;
            }
        }
    }
    cout << x << " " << s << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}