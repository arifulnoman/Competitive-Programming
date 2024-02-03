#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int i,j,n,m,mini = 1e9 + 1;
    cin >> n;
    vector<vector<int>> v(n);
    vector<int> ans;
    for(i = 0;i < n;i++)
    {
        cin >> m;
        for(j = 0;j < m;j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
            if(mini > temp)
            {
                mini = temp;
            }
        }
    }
    ll result = 0;
    for(i = 0;i < n;i++)
    {
        sort(v[i].begin(),v[i].end());
        ans.push_back(v[i][1]);
        result = result + v[i][1];
    }
    sort(ans.begin(),ans.end());
    result = result - ans[0] + mini;
    cout << result << endl;
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