#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    i = n - 1;
    int pass = 0;
    while(k > 0 && pass < n)
    {
        if(v[i] > n)
        {
            cout << "No" << '\n';
            return;
        }
        i-=v[i];
        if(i < 0)
        {
            i = n + i;
        }
        k--;
        pass++;
    }
    cout << "Yes" << '\n';
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