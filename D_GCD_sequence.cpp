#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

bool check(vector<int>& v,int index)
{
    int i,n = v.size();
    vector<int> temp_v,temp_g;
    for(i = 0;i < n;i++)
    {
        if(i == index)
        {
            continue;
        }
        temp_v.push_back(v[i]);
    }
    for(i = 1; i < n - 1;i++)
    {
        temp_g.push_back(__gcd(temp_v[i],temp_v[i-1]));
    }
    if(is_sorted(temp_g.begin(),temp_g.end()))
    {
        return true;
    }
    return false;
}
void solve()
{
    int i,n,maxi = 0,index = -1;
    cin >> n;
    vector<int> v(n),gcd_v;
    for(i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i > 0)
        {
            gcd_v.push_back(__gcd(v[i],v[i-1]));
        }
    }
    if(is_sorted(gcd_v.begin(),gcd_v.end()))
    {
        cout << "YES\n";
        return;
    }
    for(i = 0; i < n - 2;i++)
    {
        if(gcd_v[i] > gcd_v[i + 1])
        {
            index = i;
            break;
        }
    }
    if(check(v,index))
    {
        cout << "YES\n";
        return;
    }
    if(check(v,index + 1))
    {
        cout << "YES\n";
        return;
    }
    if(check(v,index + 2))
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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