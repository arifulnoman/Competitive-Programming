#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool is_possible(int target,vector<pair<int,int>> &v)
{
    int i,n = v.size(),x = 0,y = 0;
    for(i = 0;i < n;i++)
    {
        x = max(x - target,v[i].first);
        y = min(y + target,v[i].second);
        if(x > y)
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
        cin >> v[i].first >> v[i].second;
    }
    int low = 0,high = INF,ans = 0;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(is_possible(mid,v))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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