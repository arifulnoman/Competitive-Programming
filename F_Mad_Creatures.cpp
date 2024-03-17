#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool check(vector<int>& v, int mid, int c)
{
    int i,n = v.size(),count = 1,d = v[0];
    for (i = 1; i < n; i++)
    {
        if (v[i] - d >= mid)
        {
            d = v[i];
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count >= c)
    {
        return true;
    }
    return false;
}
void solve()
{
    int i,n,c;
    cin >> n >> c;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int l = 1;
    int r = 1e9;
    int ans = -1;
    while (r >= l) {
        int mid = l + (r - l) / 2;
        if (check(v,mid,c)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
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