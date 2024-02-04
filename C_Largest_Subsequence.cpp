#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    string s,lax_max;
    vector<int> v;
    cin >> n >> s;
    for(i = n - 1;i >= 0;i--)
    {
        if(lax_max.empty() || lax_max.back() <= s[i])
        {
            lax_max.push_back(s[i]);
            v.push_back(i);
        }
    }
    reverse(v.begin(),v.end());
    char last = lax_max[lax_max.size() - 1];
    int count = 0;
    for(i = 0;i < lax_max.size();i++)
    {
        if(last == lax_max[i])
        {
            count++;
        }
    }
    for(i = 0;i < lax_max.size();i++)
    {
        s[v[i]] = lax_max[i];
    }
    if(!is_sorted(s.begin(),s.end()))
    {
        cout << -1 << '\n';
        return;
    }
    cout << lax_max.size() - count << '\n';
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
