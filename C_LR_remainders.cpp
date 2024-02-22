#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll i,n,m;
    string s;
    cin >> n >> m;
    vector<ll> v(n),sequence(n),ans(n);
    ll left = 0,right = n - 1;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    cin >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == 'L')
        {
            sequence[i] = v[left];
            left++;
        }
        else
        {
            sequence[i] = v[right];
            right--;
        }
    }
    reverse(sequence.begin(),sequence.end());
    ll res = 1;
    for(i = 0;i < n;i++)
    {
        res*=sequence[i];
        res%=m;
        ans[i] = res;
    }
    reverse(ans.begin(),ans.end());
    for(i = 0;i < n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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