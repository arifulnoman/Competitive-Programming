#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,sum = 0,temp = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    sum/=n;
    for(i = 0;i < n;i++)
    {
        if(v[i] < sum)
        {
            temp-=(sum - v[i]);
            if(temp < 0)
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            temp+=(v[i] - sum);
        }
    }
    cout << "YES\n";
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