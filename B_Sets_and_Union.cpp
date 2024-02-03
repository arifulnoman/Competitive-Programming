#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,k;
    cin >> n;
    vector<vector<int>> v(n);
    map<int,int> m;
    for(i = 0;i < n;i++)
    {
        cin >> k;
        for(j = 0;j < k;j++)
        {
            int temp;
            cin >> temp;
            m[temp]++;
            v[i].push_back(temp);
        }
    }
    int maxi = 0;
    for(auto x : m)
    {
        int count = 0;
        map<int,int> temp_m = m;
        for(i = 0;i < n;i++)
        {
            auto it = find(v[i].begin(),v[i].end(),x.first);
            if(it != v[i].end())
            {
                for(int j = 0;j < v[i].size();j++)
                {
                    temp_m[v[i][j]]--;
                }
            }
        }
        for(auto z : temp_m)
        {
            if(z.second > 0)
            {
                count++;
            }
        }
        maxi = max(count,maxi);
    }
    cout << maxi << endl;
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