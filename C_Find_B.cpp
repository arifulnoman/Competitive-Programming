#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,k,temp = 0,one = 0;
    cin >> n >> k;
    vector<ll> v(n),prefix_sum(n),check(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        prefix_sum[i] = temp + v[i];
        temp = prefix_sum[i];
        if(v[i] == 1)
        {
            check[i] = ++one;
            continue;
        }
        check[i] = one;
    }
    for(i = 0;i < k;i++)
    {
        ll l,r,sum = 0;
        cin >> l >> r;
        l--;
        r--;
        if(l == r)
        {
            cout << "NO\n";
            continue;
        }
        if(l == 0)
        {
            sum = prefix_sum[r];
            one = check[r];
        }
        else
        {
            sum = prefix_sum[r] - prefix_sum[l - 1];
            one = check[r] - check[l - 1];
        }
        int total = (one * 2) + ((r - l + 1) - one);
        if(total > sum)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
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