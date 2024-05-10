#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int start = 0,end = n - 1;
    while(start <= end && k > 0)
    {
        if(start == end)
        {
            if(k >= v[start])
            {
                start++;
            }
            break;
        }
        int temp = min(v[start],v[end]);
        if(k >= 2 * temp)
        {
            v[start]-=temp;
            v[end]-=temp;
            k-=(2 * temp);
        }
        else
        {
            v[start]-=(k + 1) / 2;
            v[end]-=k / 2;
            k = 0;
        }
        if(v[start] == 0)
        {
            start++;
        }
        if(v[end] == 0)
        {
            end--;
        }
    }
    cout << n - (end - start + 1) << '\n';
}

signed main()
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