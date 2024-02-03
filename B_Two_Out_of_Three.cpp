#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,count = 0;
    cin >> n;
    vector<int> v(n);
    map<int,vector<int>> m;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        m[v[i]].push_back(i);
    }
    for(auto it : m)
    {
        if(it.second.size() > 1)
        {
            count++;
        }
    }
    if(m.size() < 2 || count < 2)
    {
        cout << -1 << '\n';
        return;
    }
    count = 3;
    for(auto it : m)
    {
        if(it.second.size() > 1 && count > 1)
        {
            int temp = count,flag = 0;
            for(auto x : it.second)
            {
                if(flag == 0)
                {
                    v[x] = temp;
                    flag = 1;
                }
                else
                {
                    v[x] = 1;
                }
            }
            count--;
        }
        else
        {
            for(auto x : it.second)
            {
                v[x] = 1;
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        cout << v[i] << " ";
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