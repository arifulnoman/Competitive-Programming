#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool check(vector<int>& v)
{
    int i;
    for(i = 0;i < v.size();i++)
    {
        if(v[i] == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int i,n,k,m,count = 0;
    string s;
    cin >> n >> k >> m >> s;
    vector<int> v(k),mark;
    for(i = 0;i < m;i++)
    {
        v[s[i] - 'a'] = 1;
        bool res = check(v);
        if(res == true)
        {
            count++;
            mark.push_back(i);
            fill(v.begin(),v.end(),0);
            continue;
        }
    }
    if(count >= n)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
    string ans;
    for(i = 0;i < mark.size() && i < n - 1;i++)
    {
        ans.push_back(s[mark[i]]);
    }
    for(i = 0;i < k && ans.size() < n;i++)
    {
        if(v[i] == 0)
        {
            ans.push_back(i + 'a');
        }
    }
    while(ans.size() < n)
    {
        ans.push_back('a');
    }
    cout << ans << '\n';
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