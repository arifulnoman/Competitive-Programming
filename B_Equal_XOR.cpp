#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(2 * n),a,b;
    unordered_map<int,int> mp,mp1,mp2;
    for(i = 0;i < 2 * n;i++)
    {
        cin >> v[i];
        if(i < n)
        {
            mp[v[i]]++;
            if(mp[v[i]] == 2)
            {
                mp1[v[i]]+=2;
                mp[v[i]] = 0;
            }
        }
        else
        {
            mp2[v[i]]++;
        }
    }
    int temp = 2 * k - a.size();
    for(auto it : mp1)
    {
        while(it.second > 0 && temp > 0)
        {
            a.push_back(it.first);
            it.second--;
            temp--;
        }
        if(temp == 0)
        {
            break;
        }
    }
    temp = 2 * k - b.size();
    for(auto it : mp2)
    {
        if(it.second & 1)
        {
            it.second--;
        }
        while(it.second > 0 && temp > 0)
        {
            b.push_back(it.first);
            it.second--;
            temp--;
        }
        if(temp == 0)
        {
            break;
        }
    }
    if(a.size() < 2 * k)
    {
        for(auto it : mp)
        {
            if(it.second == 0)
            {
                continue;
            }
            a.push_back(it.first);
            b.push_back(it.first);
            if(a.size() == 2  * k)
            {
                break;
            }
        }
    }
    for(i = 0;i < 2 * k;i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    for(i = 0;i < 2 * k;i++)
    {
        cout << b[i] << " ";
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