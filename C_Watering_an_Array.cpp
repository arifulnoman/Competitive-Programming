#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,k,d,maxi = 0;
    cin >> n >> k >> d;
    vector<int> v(n),a(k);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < k;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i < min(2 * n + 1,d);i++)
    {
        int count = 0;
        for(j = 0;j < n;j++)
        {
            if(v[j] == j + 1)
            {
                count++;
            }
        }
        maxi = max(maxi,count + ((d - i - 1) / 2));
        for(j = 0;j < a[i % k];j++)
        {
            v[j]++;
        }
    }
    cout << maxi << '\n';
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