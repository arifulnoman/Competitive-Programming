#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool my_comp(string &a,string &b)
{
    return a.size() < b.size();
}
void solve()
{
    int i,j,k,n,sum = 0,len = 0;
    cin >> n;
    ll ans = n;
    vector<string> v(n);
    map<pair<int,int>,int> freq;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),my_comp);
    for(i = 0;i < n;i++)
    {
        len = v[i].size();
        sum = 0;
        for(j = 0;j < len;j++)
        {
            sum = sum + (v[i][j] - '0');
        }
        for(j = 1;j <= len;j++)
        {
            if((len + j) & 1)
            {
                continue;
            }
            int req = 0,mid = (len + j) / 2;
            for(k = 0;k < mid;k++)
            {
                req = req + (v[i][k] - '0');
            }
            req = (req * 2) - sum;
            if(req > 0)
            {
                ans = ans + freq[{j,req}];
            }
        }
        string temp = v[i];
        reverse(temp.begin(),temp.end());
        for(j = 1;j <= len;j++)
        {
            if((len + j) & 1)
            {
                continue;
            }
            int req = 0,mid = (len + j) / 2;
            for(k = 0;k < mid;k++)
            {
                req = req + (temp[k] - '0');
            }
            req = (req * 2) - sum;
            if(req > 0)
            {
                ans = ans + freq[{j,req}];
            }
        }
        freq[{len,sum}]++;
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}