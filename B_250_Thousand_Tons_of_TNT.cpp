#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,j,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    if(n == 1)
    {
        cout << 0 << '\n';
        return;
    }
    ll maxi = 0,temp_maxi = -1,temp_mini = 1e18,sum = 0;
    for(i = 1;i <= n / 2;i++)
    {
        temp_maxi = -1,temp_mini = 1e18,sum = 0;
        if(n % i == 0)
        {
            ll count = 0;
            for(j = 0;j < n;j++)
            {
                count++;
                sum = sum + v[j];
                if(count % i == 0)
                {
                    if(temp_maxi < sum)
                    {
                        temp_maxi = sum;
                    }
                    if(temp_mini > sum)
                    {
                        temp_mini = sum;
                    }
                    sum = 0;
                }
            }
            if(abs(temp_maxi - temp_mini) > maxi)
            {
                maxi = abs(temp_maxi - temp_mini);
            }
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