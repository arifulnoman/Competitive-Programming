#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,x;
    cin >> n >> x;
    vector<pair<int,int>> a(n),b(n);
    for(i = 0;i < n;i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(i = 0;i < n;i++)
    {
        cin >> b[i].first;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i = 0;i < x;i++)
    {
        if(a[n - x + i].first > b[i].first)
        {
            b[i].second = a[n - x + i].second;
        }
        else
        {
            cout << "NO" << '\n';
            return;
        }
    }
    for(i = x;i < n;i++)
    {
        if(a[i - x].first <= b[i].first)
        {
            b[i].second = a[i - x].second;
        }
        else
        {
            cout << "NO" << '\n';
            return;
        }
    }
    sort(b.begin(),b.end(),[](auto &a,auto &b)
        {
            return a.second < b.second;
        });
    cout << "YES" << '\n';
    for(i  = 0;i < n;i++)
    {
        cout << b[i].first << " ";
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