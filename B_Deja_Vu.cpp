#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,q,temp;
    cin >> n >> q;
    vector<int> v(n),a;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < q;i++)
    {
        cin >> temp;
        if(a.empty() || a.back() > temp)
        {
            a.push_back(temp);
        }
    }
    for(i = 0;i < a.size();i++)
    {
        for(j = 0;j < n;j++)
        {
            if(v[j] % (1 << a[i]) == 0)
            {
                v[j]+=(1 << a[i] - 1);
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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