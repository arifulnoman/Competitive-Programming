#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m,d,count = 0,prev = 1;
    cin >> n >> m >> d;
    vector<int> v(m);
    vector<int> prefix(m + 1);
    for(i = 0;i < m;i++)
    {
        cin >> v[i];
    }
    if(v[0] != 1)
    {
        count++;
    }
    for(i = 0;i < m;i++)
    {
        int dif = v[i] - prev - 1;
        count = count + 1 + (dif / d);
        prefix[i] = count;
        prev = v[i];
    }
    count = count + (n - prev) / d;
    prefix[m] = count;
    int ans = 0,x = 1;
    prev = 1;
    count = 0;
    for(i = 1;i < m;i++)
    {
        int dif = v[i] - prev - 1;
        count = (dif / d) + 1 + x;
        if(count < prefix[i])
        {
            ans++;
        }
        x = prefix[i - 1];
        prev = v[i - 1];
    }
    count = ((n - prev) / d) + x;
    if(count < prefix[m])
    {
        ans++;
    }
    if(ans > 0)
    {
        cout << prefix[m] - 1 << " " << ans << endl;
        return;
    }
    cout << prefix[m] << " " << m << endl;
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