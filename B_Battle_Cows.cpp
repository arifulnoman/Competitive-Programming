#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,k,ans = 0,index = -1,maxi = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < k;i++)
    {
        if(v[i] > v[k - 1])
        {
            index = i;
            break;
        }
    }
    swap(v[0],v[k - 1]);
    for(i = 1;i < n;i++)
    {
        if(v[0] > v[i])
        {
            ans++;
            continue;
        }
        break;
    }
    maxi = ans;
    if(index == -1)
    {
        cout << maxi << '\n';
        return;
    }
    swap(v[0],v[k - 1]);
    swap(v[k - 1],v[index]);
    ans = 0;
    if(index > 0)
    {
        ans++;
    }
    for(i = index + 1;i < n;i++)
    {
        if(v[index] > v[i])
        {
            ans++;
            continue;
        }
        break;
    }
    maxi = max(maxi,ans);
    cout << maxi << '\n';
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