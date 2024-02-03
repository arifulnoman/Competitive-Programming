#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool check_vector(vector<pair<int,int>> v,int n)
{
    int i;
    int temp = v[0].first;
    for(i = 1;i < n;i++)
    {
        if(v[i].first != temp)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int i,n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(),v.end());
    bool res = check_vector(v,n);
    if(res == true)
    {
        cout << 0 << endl;
        return;
    }
    int count = 30 * n;
    vector<pair<int,int>> ans;
    while(count > 0)
    {
        int start = v[0].first;
        if(start == 1)
        {
            cout << -1 << endl;
            return;
        }
        pair<int,int> temp;
        temp.second = v[0].second;
        for(i = 1;i < n;i++)
        {
            temp.first = ceil((double)v[i].first / start);
            if(temp.first != 1)
            {
                v[i].first = temp.first;
                temp.first = v[i].second;
                ans.push_back(temp);
            }
        }
        res = check_vector(v,n);
        if(res == true)
        {
            cout << ans.size() << endl;
            for(int k = 0;k < ans.size();k++)
            {
                cout << ans[k].first << " " << ans[k].second << endl;
            }
            return;
        }
        sort(v.begin(),v.end());
        count--;
    }
    cout << -1 << endl;
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