#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k,x,sum = 0;
    cin >> n >> k >> x;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i = 0;i < n;i++)
    {
        if(i < n - x)
        {
            sum+=v[i];
        }
        else
        {
            sum-=v[i];
        }
    }
    int maxi = sum;
    for(i = 0;i < k;i++)
    {
        sum+=v[n - 1 - i];
        if(n - 1 - x - i >= 0)
        {
            sum-=(2 * v[n - 1 - x - i]);
        }
        maxi = max(maxi,sum);
    }
    cout << maxi << endl;
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