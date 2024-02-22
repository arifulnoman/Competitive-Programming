#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        v[i]+=(i+1);
    }
    sort(v.rbegin(),v.rend());
    int maxi = INF;
    for(i = 0;i < n;i++)
    {
        if(v[i] < maxi)
        {
            maxi = v[i];
        }
        else
        {
            maxi--;
        }
        cout << maxi << " ";
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
