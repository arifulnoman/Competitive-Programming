#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,sum = 0,flag = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        v[i] = v[i] % 3;
        sum+=v[i];
        if(v[i] == 1)
        {
            flag = 1;
        }
    }
    if(sum % 3 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if(sum % 3 == 2)
    {
        cout << 1 << '\n';
        return;
    }
    if(flag == 1)
    {
        cout << 1 << '\n';
        return;
    }
    cout << 2 << '\n';
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