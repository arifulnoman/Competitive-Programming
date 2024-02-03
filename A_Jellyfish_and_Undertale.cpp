#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,a,b,n,sum = 0;
    cin >> a >> b >> n;
    sum = b;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        if(temp + 1 > a)
        {
            sum = sum + a - 1;
        }
        else
        {
            sum = sum + temp;
        }
    }
    cout << sum << endl;
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