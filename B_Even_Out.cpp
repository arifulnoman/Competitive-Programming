#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    ll sum = 0;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        sum+=temp;
    }
    if(sum & 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << n << endl;
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