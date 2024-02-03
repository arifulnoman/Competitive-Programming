#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,temp,sum = 0;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> temp;
        sum+=temp;
    }
    temp = sqrt(sum);
    if(temp * temp == sum)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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