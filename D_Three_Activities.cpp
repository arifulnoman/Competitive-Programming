#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,k,n;
    cin >> n;
    vector<pair<int,int>> v1(n),v2(n),v3(n);
    for(i = 0;i < n;i++)
    {
        cin >> v1[i].first;
        v1[i].second = i;
    }
    for(i = 0;i < n;i++)
    {
        cin >> v2[i].first;
        v2[i].second = i;
    }
    for(i = 0;i < n;i++)
    {
        cin >> v3[i].first;
        v3[i].second = i;
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    sort(v3.rbegin(),v3.rend());
    int maxi = 0;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(v1[i].second != v2[j].second)
            {
                for(k = 0;k < 3;k++)
                {
                    if(v3[k].second != v2[j].second && v3[k].second != v1[i].second)
                    {
                        maxi = max(maxi,v1[i].first + v2[j].first + v3[k].first);
                    }
                }
            }
        }
    }
    cout << maxi << '\n';
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